#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,b,count=0,i,a[t];
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		if(n!=0){
			if(n%2!=0) b=(n-1)/2 + 1;
			else b=(n/2) + 1;
			a[i]=n-b;
		}else a[i]=0;
	}
	for(i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
}
