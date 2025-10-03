#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

bool isPrime(ll n) {
    if (n<2){
        return false;
    }
    for (ll i = 2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

 bool ch(ll n){
	string s = to_string(n);
	reverse(s.begin(),s.end()); 
	string s2=s;
	reverse(s.begin(),s.end());
	if(s==s2) return true;
	else return false;
}

int main(){
	ll l,r,c=0;
	cin>>l>>r;
	for(ll i=l;i<=r;i++){
		if(isPrime(i) && ch(i)){
			c++;
		}
	}
	cout<<c;
}

