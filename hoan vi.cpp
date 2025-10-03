#include <bits/stdc++.h>
using namespace std;

void p(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<' '<<endl;
}
void f(int i,  int a[],int n,int b[]){
	for (int j=1;j<=n;j++){
		if(b[j]==0){
			a[i]=j;
			b[j]=1;
			if(i==n){
				p(a,n);
			}
			else{
				f(i+1,a,n,b);
			}
			b[j]=0;
		}
	}
}
int main(){
	int n;
	int a[n+1];
	int b[n+1];
	for(int i=1;i<=n;i++){
		b[i]=0;
	}
	cin>>n;
	f(1,a,n,b);
}


