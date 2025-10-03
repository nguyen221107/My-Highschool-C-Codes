#include <bits/stdc++.h>

using namespace std; 

#define ll long long
#define db double
const ll M=10000;
bool prime[M+1];
void build(){
	memset(prime,true,sizeof(prime));
	for(ll i=2;i<=M;i++){
		if(prime[i]==true){
			for(ll j=i*i;j<=M;j+=i){
				prime[j]=false;
			}
		}
	}
}

int main(){
	ll n;
	cin>>n;
	build();
	for(ll i=2;i<=n;i++){
		if(prime[i]==true && n%i==0){
			cout<<i<<' ';
		}
	}
}


