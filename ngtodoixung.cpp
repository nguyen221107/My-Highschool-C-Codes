#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ch[10000001];


void prime(){
	for (int i=2;i<=10000000;i++){
			ch[i]=1;
		}
	ch[0]=ch[1]=0;
	for (int i=2;i*i<=10000000;i++){
		if(ch[i]==1){
			for (int j=i*i;j<=10000000;j+=i){
				ch[j]=0;
			}
		}
	}
}

int main(){
	ll n;
	cin>>n;
	prime();
	for(ll i=n+1;i<=10000000;i++){
		if(ch[i]==1){
			string s = to_string(i);
			reverse(s.begin(),s.end());
			string ss=s;
			reverse(s.begin(),s.end());
			if(s==ss){
				cout << s <<endl;
				break;
			}
		}
	}
}
