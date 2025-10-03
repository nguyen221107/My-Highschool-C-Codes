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

void bfs(int u){
	queue<int> q;
	q.push(u);
	vst[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		cout<<v<<" ";
		for(int x:adj[v]){
			if(!vst[x]){
				q.push(x);
				vst[x]=true;
			}
		}
	}
}

int main(){
	inp();
	bfs(1);
	return 0;
}
