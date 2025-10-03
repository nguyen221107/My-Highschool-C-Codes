#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=2e5+5;
ll cnt[N],dp[N];

int main(){
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll x;
		cin>>x;
		cnt[x]++;
	}
	dp[0]=0;
	dp[1]=cnt[1];
	for(ll i=2;i<=N;i++){
		dp[i]=max(dp[i-1],dp[i-2]+i*cnt[i]);
	}
	cout<<dp[n];
}
