#include <bits/stdc++.h>
using namespace std;

void out(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<' '<<endl;
}

void d(int i,int k,int a[],int n,int c){
	for(int j=1;j<=k;j++){
		a[i]=j;
		if(i==n){
			for(int k=1;k<=n;k++){
				c=a[k]+c;
			}
			if(c==k){
				out(a,n);
			}
			c=0;
		}else{
			d(i+1,k,a,n,c);
		}
	}
}

int main(){
	int k,n,c=0;
	cin>>k>>n;
	int a[n+1];
	d(1,k,a,n,c);
}
