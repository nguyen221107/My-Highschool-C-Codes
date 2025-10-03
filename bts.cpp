#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[1000],max=0,count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[j]>max){
				count++;
				max=a[j];
				if(max>=a[i]) break;
			}
		}
		max=0;
	}
	cout<<count;
}
