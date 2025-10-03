#include <bits/stdc++.h>
using namespace std;

bool v[1001];
int n,m;
vector<pair<int,int>> adj[1001];
struct edge{
	int u,v,w;
};

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back({y,z});
		adj[y].push_back({x,z});
	}
	memset(v,false,sizeof(v));
}

void prim(int u){
	vector<edge> mst;
	int d=0;
	v[u]=true;
	while(mst.size()<n-1){
		int min=INT_MAX;
		int X,Y;
		for(int i=1;i<=n;i++){
			if(v[i]==true){
				for(auto it:adj[i]){
					int j=it.first; 
					int ts=it.second;
					if(v[j]==false && ts<min){
						min=ts;
						X=j; Y=i;
					}
				}
			}
		}
		mst.push_back({X,Y,min});
		d+=min;
		v[X]=true;
	}
	cout<<d<<endl;
	for(auto it:mst){
		cout<<it.u<<' '<<it.v<<' '<<it.w<<endl;
	}
}

int main(){
	inp();
	prim(1);
}
