#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	ll len=s.size();
	if(len%2!=0){
		return false;
	}else{
		ll h=len/2;
		ll s1=0,s2=0;
		for(ll i=0;i<h;i++){
			s1+=s[i]-'0';
			s2+=s[h+i]-'0';
		}
		if(s1==s2){
			return true;
		}else return false;
	}
} 

int main(){
	ll t=10;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<1<<endl;
		}else cout<<0<<endl;
	}
}
