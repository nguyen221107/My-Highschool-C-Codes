#include <bits/stdc++.h>
using namespace std;

const int N=10e5;
int check[N]={0};
vector<int> ans;
int m=INT_MAX;

void check1(int a,int b){
	m=min(a,b);
}

void backtrack1(string s,int n,string x,string pre){
	for(int i=0;i<n;i++){
		int a=s[i]-'0';
		if(check[a]==0){
			pre+=s[i];
			check[a]=1;
			if(pre.size()<n){
				backtrack1(s,n,x,pre);
			}else if(pre.size()==n){
				cout<<pre<<endl;
				check1(stoi(pre),m);
				pre=x[0];
			}
			check[a]=0;
		}
	}
}

int main(){
	string x,y;
	cin>>x>>y;
	string s=x+y;
	int n=s.size();
	int a=x[0]-'0';
	int b=y[0]-'0';
	if(a<b){
		string pre;
		pre=x[0];
		int a=x[0]-'0';
		check[a]=1;
		backtrack1(s,n,x,pre);
		cout<<m;
	}
}
