#include <bits/stdc++.h>
using namespace std;

bool vst[1001];
vector<int> adj[1001];
int n,m,st,en;


bool bfs(int u){
	vst[u]=true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:adj[v]){
			if(!vst[x]){
				q.push(x);
				vst[x]=true;
				parent[x]=v;
			}else if(x!=parent[v]){
				st=v;
				en=x;
				return true;
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vst,false,sizeof(vst));
	for(int i=1;i<=n;i++){
		if(!vst[i]){
			if(bfs(i)){
				cout<<"YES";
			}
		}
	}
}
