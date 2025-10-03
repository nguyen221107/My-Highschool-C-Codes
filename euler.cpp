#include<bits/stdc++.h>
using namespace std;

int n,m;
set<int> adj[1001];

void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].insert(y);
		adj[y].insert(x);
	}
}

void el(int u){
	stack<int> st;
	vector<int> ec;
	st.push(u);
	while(!st.empty()){
		int x = st.top();
		if(adj[x].size()!=0){
			int y=*adj[x].begin();
			st.push(y);
			adj[x].erase(y);
			adj[y].erase(x);
		}else{
			st.pop();
			ec.push_back(x);
		}
	}
	reverse(ec.begin(),ec.end());
	for(int i:ec) cout<<i<<' ';
}

int main(){
	inp();
	el(1);
}
