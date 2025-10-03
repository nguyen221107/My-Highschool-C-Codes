#include<bits/stdc++.h>
using namespace std;

int n,m,cnt=0,ans=0;
vector<int> adj[1001];
int low[1001],num[1001],size[1001];

void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(low,-1,sizeof(low));
	memset(num,-1,sizeof(num));
}

void tarjan(int u,int p){
	low[u] = num[u] = ++cnt;
	size[u]=1;
	for(int x:adj[u]){
		if(x!=p){
			if(num[x]!=-1){
				low[u]=min(low[u],num[x]);
			}else 
			{
				tarjan(x,u);
				low[u]=min(low[u],low[x]);
				size[u]+=size[x];
			}
		}
	}
}

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==-1){
			tarjan(i,i);
		}
	}
	for(int i=2;i<=n;i++){
		if(low[i]>=num[i]){
			ans+=size[i]*(n-size[i]);
		}
	}
	cout<<ans;
}
