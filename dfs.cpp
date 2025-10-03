#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool vst[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vst, false, sizeof(vst));
}

void dfs(int u){
	cout<<u<<" ";
	vst[u]=true;
	for(int v:adj[u]){
		if(!vst[v]){
			dfs(v);
		}
	}
}

int main(){
	inp();
	dfs(1);
}
