#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
	ll n,a,b;
	ll ans;
	cin>>n>>a>>b;
	ans=(n*(2*a+(n-1)*b))/2;
	cout<<ans;
}
