#include <bits/stdc++.h>
using namespace std;

bool vst[1001];
int deg[1001];
int n,m,st,en;
vector<int> adj[1001];


bool kahn(int u){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(deg[i]==0){
			q.push(i);
		}
	}
	int cnt=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		++cnt;
		for(int x:adj[v]){
			deg[x]--;
			if(deg[x]==0){
				q.push(x);
			}
		}
	}
	if(cnt==n){
		return true;
	}
	return false;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		deg[y]++;
	}
	if(kahn()){
		cout<<"YES";
	}else cout<<"NO";
}
