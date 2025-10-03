#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,s;
	ll c=1000000007;
	cin>>n;
	ll m=n+1;
	if(n%2==0) n/=2;
	else m/=2;
	s=(((((n%c)*(n%c))%c)*((((m)%c)*((m)%c))%c))%c);
	cout<<s;
} 
