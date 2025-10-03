#include <bits/stdc++.h> 
using namespace std;
#define ll long long

int main(){
	ll n,ans;
	cin>>n;
	if(n%2==0){
		n=n/2;
	}else{
		n=(n+1)/2;
	}
	ans=(n*(2+(n-1)*2))/2;
	cout<<ans;
}
