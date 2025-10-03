#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	n=1e6;
	int ch[n+1];
	for (int i=2;i<=n;i++){
		ch[i]=1;
	}
	for (int i=2;i<=n;i++){
		if(ch[i]==1){
			for (int j=i*i;j<=n;j+=i){
				ch[j]=0;
			}
		}
	}
	if(ch[550003]==1){
		cout<<1;
	}
}
