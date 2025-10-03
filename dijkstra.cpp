#include <bits/stdc++.h>
using namespace std;

const int INF=100009;
int n,m,s;
vector< pair<int,int> > adj[1001];

void inp(){
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back({y,z});
		//adj[y].push_back({x,z});
	}
}

void dj(int u){
	vector<int> d(n+1,INF);
	d[u]=0;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
	q.push({0,u});
	while(!q.empty()){
		pair<int,int> top=q.top();
		q.pop();
		int kc=top.first;
		int dd=top.second;
		if(kc>d[dd]) continue;
		for(auto x:adj[dd]){
			int v=x.first;
			int w=x.second;
			if(d[v]>d[dd]+w){
				d[v]=d[dd]+w;
				q.push({d[v],v});
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<' ';
	}
}

int main(){
	inp();
	dj(s);
}
