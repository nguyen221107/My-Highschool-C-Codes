#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e7+5;
bool prime[N];
ll snt=0,sum=0,mx=0,mn=1e17,premax=0,premin=1e17;
ll cnt[N];
ll d=0;

void build(){
	memset(cnt,0,sizeof(cnt));
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(ll i=2;i<N;i++){
		if(prime[i]==true){
			for(ll j=i*i;j<N;j+=i){
				prime[j]=false;
			}
		}
	}
}

void type1(ll n){
	premax=mx;
	premin=mn;
	if(prime[n]==true) snt++;
	sum+=n;
	mx=max(mx,n);
	mn=min(mn,n);
	cnt[n]++;
	d++;
}

void type2(ll c,ll n){
	d-=c;
	if(cnt[n]<=c){
		sum-=c*n;
		cnt[n]=0;
		if(prime[n]==true){
			snt-=c;
		}
		if(n==mx){
			if(d==1){
				mx=mn=premax;
			}else
			mx=premax;
		}else if(n==mn){
			if(d==1){
				mx=mn=premin;
			}else
			mn=premin;
		}
	}else{
		if(prime[n]==true){
			snt-=c;
		}
		cnt[n]-=c;
		sum-=c*n;
	}
}

void type3(){
	if(sum==0){
		cout<<0<<' '<<0<<' '<<0<<endl;
		return;
	}
	cout<<sum<<' ';
	cout<<mx-mn<<' ';
	cout<<snt<<endl;
}


int main(){
//	freopen("TRUYVAN.INP","r",stdin);
//	freopen("TRUYVAN.OUT","w",stdout);
	build();
	ll q;
	cin>>q;
	while(q--){
		ll t,c,n;
		cin>>t;
		if(t==1){
			cin>>n;
			type1(n);
		}else if(t==2){
			cin>>n>>c;
			type2(c,n);
		}else if(t==3){
			type3();
		}
	}
}
