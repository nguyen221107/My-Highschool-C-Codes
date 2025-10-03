#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,j=0,i=2;
	cin>>n;
	ll a[n+1];
	for(ll i=2;i<n;i++){
		a[i]=0;
	}
	a[1]=1;
	a[n]=1;
	while(i<=n){
		while(n%i==0){
			n/=i;
			a[i]++;
		}
		i++;
	}
	n=i;
	for(ll j=2;j<n;j++){
		if(a[j]>0){
			cout<<j<<' '<<a[j]<<endl;
		}
	}
}
