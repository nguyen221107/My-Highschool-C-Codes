#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<int> adj[1001];
bool vst[1001];
int prnt[1001];
vector<int> path;
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x); //bo dong nay de lam do thi co huong
	}
	cin>>s>>t;
	memset(vst, false, sizeof(vst));
}

void dfs(int u){
	vst[u]=true;
	for(int v:adj[u]){
		if(!vst[v]){
			prnt[v]=u;
			dfs(v);
		}
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vst[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x:adj[v]){
			if(!vst[x]){
				q.push(x);
				vst[x]=true;
				prnt[x]=v;
			}
		}
	}
}

void pth(int s,int t){
	memset(prnt, 0,sizeof(prnt));
//	dfs(s); 
	bfs(s);
	if(!vst[t]){
		cout<<"none";
	}else{
		while(t!=s){
			path.push_back(t);
			t=prnt[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for(int x:path){
			cout<<x<<" ";
		}
	}
	
}

int main(){
	inp();
	pth(s,t);
}
