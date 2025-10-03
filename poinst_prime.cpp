#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e6;
ll a[N+10];
bool prime[N+10];

void sang(){
	for(ll i=2;i<=N;i++){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	for(ll i=2;i<=sqrt(N);i++){
		if(prime[i]){
			for(ll j=i*i;j<=N;j+=i){
				prime[j]=false;
			}
		}
	}
}

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	ll n;
	cin>>n;
	ll cnt=0;
	sang();
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(prime[a[i]]==false){
			cnt++;
		}
	}
	ll p=0;
	ll g=a[1];
	if(cnt>1 && cnt<4){
		for(ll i=2;i<=n;i++){
			g=gcd(g,a[i]);
			if(g>1){
				p=1;
			}
		}
	}else{
		p=1;
		for(ll i=2;i<=n;i++){
			g=gcd(g,a[i]);
		}
	}
	if(g==1){
		if(cnt>1 && p==0){
			cout<<"pairwise poinst_prime"<<endl;
			return 0;
		}
		if(cnt<=1){
			cout<<"pairwise poinst_prime"<<endl;
		}else{
			cout<<"setwise poinst_prime"<<endl;
		}
	}else{
		cout<<"not points_prime"<<endl;
	}
}
