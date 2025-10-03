#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e6+5;
const ll mod=1e9+7;
const ll base=311;
ll h[N],p[N],hr[N];

ll get1(ll x,ll y){
	ll res=(h[y]-h[x-1]*p[y-x+1]+mod*mod)%mod;
	return res;
}

ll get2(ll x,ll y){
	ll res=(hr[x]-hr[y+1]*p[y-x+1]+mod*mod)%mod;
	return res;
}

bool test(ll mid,ll n){
	for(ll i=mid;i<=n;i++){
		ll u=get1(i-mid+1,i);
		ll v=get2(i-mid+1,i);
		if(u==v) return true;
	}
	return false;
}

int main(){
	string a;
	cin>>a;
	ll n=a.size();
	a='!'+a;
	h[0]=0;
	hr[n+1]=0;
	for(ll i=1;i<=n;i++){
		h[i]=(h[i-1]*base+a[i])%mod;
	}
	for(ll i=n;i>=1;i--){
		hr[i]=(hr[i+1]*base+a[i])%mod;
	}
	p[0]=1;
	for(ll i=1;i<=n;i++){
		p[i]=(p[i-1]*base)%mod;
	}
	ll l=0,r=n/2-(n%2==0),res1=0,res2=0;

	while(l<=r){
		ll mid=(l+r)/2;
		if(test(2*mid+1,n)){
			l=mid+1;
			res1=2*mid+1;
		}else{
			r=mid-1;
		}
	}
	l=1,r=n/2;

	while(l<=r){
		ll mid=(l+r)/2;
		if(test(2*mid,n)){
			l=mid+1;
			res2=2*mid;
		}else{
			r=mid-1;
		}
	}
	ll ans=max(res1,res2);
	
	for(ll i=ans;i<=n;i++){
		ll u=get1(i-ans+1,i);
		ll v=get2(i-ans+1,i);
		if(u==v){
			for(ll j=i-ans+1;j<=i;j++){
				cout<<a[j];
			}
			break;
		}
	}
}

