#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e6+5;

ll h2d(string s){
	ll d=0;
	for(char x:s){
		d*=16;
		if(x>='0' && x<='9'){
			d+=x-'0';
		}else if(x>='A' && x<='F'){
			d+=x-'A'+10;
		}
	}
	return d;
}

void d2o(ll d){
	if(d==0) cout<<"0";
	string ans="";
	while(d>0){
		ans=char((d%8)+'0') + ans;
		d/=8;
	}
	cout<<ans;
}

int main(){
	freopen("COSO.INP","r",stdin);
	freopen("COSO.OUT","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll d=h2d(s);
		d2o(d);
	}
}
