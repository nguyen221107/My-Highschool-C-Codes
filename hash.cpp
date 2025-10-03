#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
const ll mod=1e9+7;
const ll base=31;
ll h[N],p[N];

ll get(ll x,ll y){
	ll res=(h[y]-h[x-1]*p[y-x+1]+mod*mod)%mod;
	return res;
}

int main(){
	string a;
	string b;
	cin>>a>>b;
	ll hb=0;
	for(ll i=0;i<b.size();i++){
		hb=(hb*base+b[i])%mod;
	}
	a='!'+a;
	h[0]=0;
	for(ll i=1;i<a.size();i++){
		h[i]=(h[i-1]*base+a[i])%mod;
	}
	p[0]=1;
	for(ll i=1;i<a.size();i++){
		p[i]=(p[i-1]*base)%mod;
	}
	for(ll i=1;i<a.size()-b.size()+1;i++){
		ll u=get(i,i+b.size()-1);
		if(u==hb){
			cout<<i<<' ';
		}
	}
}

