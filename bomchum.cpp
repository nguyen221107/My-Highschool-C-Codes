#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

ll work(ll n){
	ll pre=1,tt=1;
	for(ll i=2;i<=sqrt(n);i++){
		ll mu=0;
		while(n%i==0){
			n/=i;
			++mu;
			pre+=pow(i,mu);
		}
		tt*=pre;
		pre=1;
	}
	if(n>1){
		pre+=n;
		tt*=pre;
		pre=1;
	}
	return tt;
}

int main(){
	ll f[n], a[n];
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>f[i];
		a[i]=work(f[i]);
	}
	for(ll i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
}
