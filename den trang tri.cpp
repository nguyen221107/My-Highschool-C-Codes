#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long
int main(){
	const int mod=1000000007;
	int n,k;
	unsigned long long a=1,b=1;
	cin>>n>>k;
	if(k<n-k){
		for(ul i=n-k+1;i<=n;i++){
			a=a*i;
		}
		for(ul i=1;i<=k;i++){
			b=b*i;
		}
	}
	else{
		for(ul i=k+1;i<=n;i++){
			a=a*i;
		}
		for(ul i=1;i<=n-k;i++){
			b=b*i;
		}
	}
	cout<<(a/b)%mod;
}
