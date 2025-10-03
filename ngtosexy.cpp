#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll,ll> ch[10000001];

void build(){
	ll res=5;
	for(ll i=1;i<=10000000;i++){
		ch[i].first=res;
		ch[i].second=res+6;
		ll pre=res+6;
		if((res+2)%)
		while(res%2==0 || res%3==0){
			if(res<=pre){
				res+=2;
			}
		}
	}
}

int main(){
	ll t;
	cin>>t;
	build();
	while(t--){
		ll n;
		cin>>n;
		cout<<ch[n].first<<' '<<ch[n].second<<endl;
	}
}
