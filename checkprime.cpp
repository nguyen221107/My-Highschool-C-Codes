#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n){
	if(n<2) return false;
	if(n%2==0) 
		return n==2;
	if(n%3==0) 
		return n==3;
	for(ll i=5;i+2<=sqrt(n);i+=6){
		if(n%i==0){
			return false;
		}
		if(n%(i+2)==0){
			return false;
		}
	}
	return true;
}

int main(){
	ll n;
	cin>>n;
	if(prime(n)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
