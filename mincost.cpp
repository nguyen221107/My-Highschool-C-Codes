#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e5+6;
ll a[N];

int main(){
	freopen("MINCOST.INP","r",stdin);
	freopen("MINCOST.OUT","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		ll ans=0;
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ll mid=a[n/2];
		for(ll i=0;i<n;i++){
			ans+=abs(mid-a[i]);
		}
		cout<<ans<<endl;
	}
}

