#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,q;
	ll l,r;
	cin>>n>>q;
	int a[n],f[n],ans[q];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			f[i]=a[i];
		}
		else{
			f[i]=f[i-1]+a[i];
		}
	}
	for(int i=0;i<q;i++){
		cin>>l>>r;
		if(l==1){
			ans[i]=f[r-1];
		}else{
			ans[i]=f[r-1]-f[l-2];
		}
	}
	for(int i=0;i<q;i++){
		cout<<ans[i]<<endl;
	}
}
