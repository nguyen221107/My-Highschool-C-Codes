#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll n,k;
ll a[2000][2000];
void th(){
	a[1][0]=1;
	a[1][1]=1;
	for(ll i=2;i<=n;i++){
		for(ll j=0;j<=i;j++){
			if(j==0 || j==i){
			 a[i][j]=1; }
			else {
			a[i][j]=a[i-1][j-1]+a[i-1][j];}
		}
	}
}
int main(){
	cin>>n>>k;
	th();
	cout<<a[n][k]%1000000007;
}
