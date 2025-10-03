#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
vector<int> trans[1001];
bool vst[1001];
int n,m;
stack<int> s;

void dfs1(int u){
	vst[u]=true;
	for(int x:adj[u]){
		if(!vst[x]){
			dfs1(x);
		}
	}
	s.push(u);
}

void dfs2(int u){
	vst[u]=true;
	cout<<u<<" ";
	for(int x:trans[u]){
		if(!vst[x]){
			dfs2(x);
		}
	}
}

void tg(){
	while(!s.empty()){
		int v=s.top();
		s.pop();
		if(!vst[v]){
			dfs2(v);
			cout<<endl;
		}
	}
}

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		trans[y].push_back(x);
	}
}

int main(){
	inp();
	memset(vst,false,sizeof(vst));
	for(int i=1;i<=n;i++){
		if(!vst[i]){
			dfs1(i);
		}
	}
	memset(vst,false,sizeof(vst));
	tg();
}
