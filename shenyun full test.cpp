#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,x,y,ans,z;
	cin>>n>>x>>y;
	if(x%y==0) z=x;
	else if(y%x==0) z=y;
	else z=x*y;
	while(1){
		if(n%z==0){
			ans=n/z;
			break;
		}
		n--;
	}
	cout<<ans;
} 
