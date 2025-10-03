#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll c=20240131;

int main(){
	ll n,s=0,a=1;
	cin>>n;
	if(n>=c) n=c-1;
	for(ll i=1;i<=n;i++){
		a=(a%c * i%c) %c;
		s=((s%c)+(a%c))%c;
	}
	cout<<s;
}

