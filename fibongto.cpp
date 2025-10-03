#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e7;
bool prime[N+1];
ll f[N];

void sang(){
	for(ll i=2;i<=N;i++){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	for(ll i=2;i<=N;i++){
		if(prime[i]){
			for(ll j=i*i;j<=N;j+=i){
				prime[j]=false;
			}
		}
	}
}

bool check(ll n){
	if(n%2==0) return n==2;
	if(n%3==0) return n==3;
	for(ll i=5;i+2<n;i+=6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}

void fibo(ll a,ll b){
	ll cnt=0;
	f[0]=0;
	f[1]=1;
	for(ll i=2;i<N;i++){
		f[i]=f[i-1]+f[i-2];
		if(f[i]>=a && f[i]<=b){
			if(prime[i]){
				if(check(f[i])){
					cnt++;
				}
				cnt++; 
			}
		}
		if(f[i]>=b){
			break;
		}
	}
	cout<<cnt; 
}


int main(){
//	freopen("fiboprime.inp","r",stdin);
//	freopen("fiboprime.out","w",stdout);
	ll a,b;
	cin>>a>>b;
	sang();
	fibo(a,b);
}
