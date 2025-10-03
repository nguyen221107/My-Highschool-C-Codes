#include <bits/stdc++.h>
using namespace std;

const int N=10e5;
int prime[N];
vector<vector<int>> ans;
int n,cnt=0;
int a[N];

void isprime(int n){
	prime[0]=prime[1]=1;
	for(int i=2;i<=sqrt(n);i++){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
}

void check(int n){
	if(prime[a[1]+a[n]]==1){
		return;
	}
	cnt++;
	vector<int> res;
	for(int i=1;i<=n;i++){
		res.push_back(a[i]);
	}
	if(cnt<=10000) ans.push_back(res);
}

int ch[N]={0};

void quaylui(int x,int n){
	for(int i=2;i<=n;i++){
		if(ch[i]==0){
			a[x]=i;
			ch[i]=1;
			if(x<n && prime[a[x]+a[x-1]]==0){
				quaylui(x+1,n);
			}
			if(x==n && prime[a[x]+a[x-1]]==0){
				check(n);
			}
			ch[i]=0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	isprime(50);
	n=n*2;
	a[1]=1;
	quaylui(2,n);
	cout<<cnt<<endl;
	for(auto x:ans){
		for(auto y:x){
			cout<<y<<' ';
		}
		cout<<endl;
	}
}
