#include <bits/stdc++.h>
using namespace std;

int main(){
	int prime[10001];
	for(int i=0;i<=10000;i++) prime[i]=1;
	for(int i=2;i<=100;i++){
		if(prime[i]==1){
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
	int t,n;
	while(t--){
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(prime[i]==1 && prime[n-i]==1){
				cout<<i<<' '<<n-i<<endl;
			}
		}
	}
}
