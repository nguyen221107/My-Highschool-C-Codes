#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int ch[1000001];
	for (int i=2;i<=1000000;i++){
			ch[i]=1;
		}
		ch[0]=ch[1]=0;
	for (int i=2;i*i<=1000000;i++){
		if(ch[i]==1){
			for (int j=i*i;j<=1000000;j+=i){
				ch[j]=0;
			}
		}
	}
	while(t--){
		int l,r;
		cin>>l>>r;
		int cnt=0; 
		for (int i=l;i<=r;i++){
			if(ch[i]==1){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}	
}
