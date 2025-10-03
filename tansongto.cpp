#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n){
	if(n<2) return false;
	if(n%2==0) return n==2;
	if(n%3==0) return n==3;
	for(ll i=5;i<=sqrt(n);i+=6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}

void solve(){
	string s;
	getline(cin, s);
	ll ans=0;
	ll check[255]={0};
	ll n=s.size();
	for(ll i=0;i<n;i++){
		if(check[s[i]]==0){
			check[s[i]]=1;
			ll cnt=1;
			for(int j=i+1;j<n;j++){
				if(s[j]==s[i]){
					cnt++;
				}
			}
			if(prime(cnt)){
				ans+=cnt;
			}
		}
	}
	cout<<ans;
}

int main(){
	freopen("freqprime.inp","r",stdin);
	freopen("freqprime.out","w",stdout);
	solve();
}
