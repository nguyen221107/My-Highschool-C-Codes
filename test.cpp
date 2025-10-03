#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		string s;
		cin>>n>>s;
		
		ll cnt=count(s.begin(), s.end(), '0');
		ll a=0;
		for(ll i=0;i<cnt;i++){
			if(s[i]=='1'){
				a++;
			}
		}
		cout<<a<<endl;
	}
}
