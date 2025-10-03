#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e5+10;
ll m[N];

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main() {
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>m[i];
	}
	ll c=0;
	for(ll i=2;i<=n;i++){
		c=gcd(c,abs(m[i]-m[i-1]));
	}
	for(ll i=2;i<=c;i++){
		if(c%i==0){
			cout<<i<<endl;
		}
	}
}
