#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,d=0;
	cin>>n;
	int a[n];
	int t[n];
	for (i=0;i<n;i++){
		cin>>a[i];
		t[i]=t[i-1]+a[i];
	}
	for (i=0;i<n;i++){
		for (j=i;j<n;j++){
			if(t[j]-t[i-1]==0 && j-i+1>=d){
				d=j-i+1;
			}
		}
	}
	cout<<d;
} 
