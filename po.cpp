#include <bits/stdc++.h>
using namespace std;


int main(){
	int q,c=0,n,s,pre,cnt=0;
	cin>>n>>s;
	cin>>q;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(q==1){
		for(int i=0;i<n;i++){
			pre=a[i];
		if(i<(n-1)){
			for(int j=i+1;j<n;j++){
				if((pre+a[j])<=s){
					pre+=a[j];
				}
			}
		}
		c=max(c,pre);
		}
		cout<<c;
	}else if(q==2){
		for(int i=0;i<n;i++){
			pre=a[i];
			if(i<n){
			for(int j=i+1;j<n;j++){
				if((pre+a[j])<=s){
					pre+=a[j];
				}
			}
		}
		if(pre>c){
			cnt=1;
			c=max(pre,c);
		}else if(pre==c){
			cnt++;
		}
		}
		cout<<c<<endl;
		cout<<cnt;
	}
} 
