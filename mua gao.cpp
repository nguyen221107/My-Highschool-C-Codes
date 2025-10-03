#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s;
	cin>>n>>s;
	int w[n+1],p[n+1];
	int a[n+1][s+1];
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=0;i<=n;i++){
		a[i][0]=0;
	}
	for(int i=0;i<=s;i++){
		a[0][i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(p[i]>j){
				a[i][j]=a[i-1][j];
			}
			else{
				a[i][j]=max(a[i-1][j],a[i-1][j-p[i]]+w[i]);
			}
		}
	}
	cout<<a[n][s];
}
