#include <bits/stdc++.h>
using namespace std;

bool v[1001];
int n,m;
vector<pair<int,int>> adj[1001];
struct edge{
	int u,v;
	int w;
};
int prnt[1001],d[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back({y,z});
		adj[y].push_back({x,z});
	}
	memset(v,false,sizeof(v));
	for(int i=1;i<=n;i++) d[i]=INT_MAX;
}

void prim(int u){
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
	q.push({0,u});
	vector<edge> mst;
	int res=0;
	while(!q.empty()){
		pair<int,int> on=q.top();
		q.pop();
		int dinh=on.second, ts=on.first;
		if(v[dinh]) continue;
		res+=ts;
		v[dinh]=true;
		if(u!=dinh){ 
			mst.push_back({dinh,prnt[dinh],ts}); //nguoc lai voi prim cach 1
		}
		for(auto it:adj[dinh]){
			int y=it.first, z=it.second;
			if(!v[y] && z<d[y]){
				q.push({z,y});
				d[y]=z;
				prnt[y]=dinh;
			}
		}
	}
	cout<<res<<endl;
	for(auto it:mst){
		cout<<it.u<<' '<<it.v<<' '<<it.w<<endl;
	}
}

int main(){
	inp();
	prim(4);
}

