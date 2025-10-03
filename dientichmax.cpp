#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r=n;
	int s=min(a[l],a[r])*(r-l);
	while(r!=l){
		if(a[r]<=a[l]){
			r--;
			s=max(s,(min(a[l],a[r])*(r-l)));
		}else if(a[l]<=a[r]){
			l++;
			s=max(s,(min(a[l],a[r])*(r-l)));
		}
	}
	cout<<s;
}
