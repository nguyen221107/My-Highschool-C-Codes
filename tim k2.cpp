#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	freopen("findhorse.inp","r",stdin);
	freopen("findhorse.out","w",stdout);
	ll n;
	cin>>n;
	ll a[n+1];
	ll b[n+1];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(b+1,b+1+n);
	vector<ll> v;
	for(ll i=1;i<=n;i++){
		ll l=1,r=n,k=a[i],vt=0;
		while(l<=r){
			ll mid=(l+r)/2;
			if(b[mid]<k){
				vt=mid;
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		cout<<vt<<' ';
	}
}
