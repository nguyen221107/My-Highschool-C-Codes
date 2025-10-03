#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m, a[n],b[m],s,d=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for (int i=0;i<m;i++){
		cin>>b[i];
	}
	for (int i=0;i<m;i++){
		if (a[0]==b[i] && m-i>=n){
			//s=i;
			for (int j=0;j<n;j++){
				if (a[j] == b[i++]){
					d++;
				}
			}
		}
	}
	cout<<d;
}
