#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=2e5;
ll dp[N],a[N];

ll solve(vector<ll>& a, ll n, ll k){
	
	
}

int main(){
	ll n,k;
	cin>>n>>k;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=a[i];
	}
	ll ans=INT_MIN;
	for(ll i=1;i<=n-k+1;i++){
		for(ll j=1;j<k;j++){
			dp[i]+=a[i+j]*(j+1);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans;
}
