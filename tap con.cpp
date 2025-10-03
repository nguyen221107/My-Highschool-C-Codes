#include <bits/stdc++.h>
using namespace std;

void out(int a[],int k){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void c(int i,int a[],int n, int k){
	for(int j=1;j<=n;j++){
		if(j>a[i-1]){
			a[i]=j;
			if(i==k){
				out(a,k);
			}
			else{
				c(i+1,a,n,k);
			}
		}	
	}
}

int main(){
	int n,k;
	cin>>n;
	int a[k+1];
	a[0]=0;
	cout<<' '<<endl;
	for(k=1;k<=n;k++){
		c(1,a,n,k);
	}
}
