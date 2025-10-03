#include <bits/stdc++.h>
using namespace std;

int n,m,cnt=0,ans=0,sum=0,times=1;
int num[1001],low[1001],size[1001];
vector<int> adj[1001];
bool Nt[1001],vst[1001];

void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void tarjan(int u,int p){
	num[u] = low[u] = ++cnt;
	int ch=0;
	size[u]=1;
	for(int x:adj[u]){
		if(x!=p){
			if(num[x]!=0){
				low[u]=min(low[u],num[x]);
			}
			else{
				tarjan(x,u);
				ch++;
				low[u]=min(low[u],low[x]);
				if(u==p){
					if(ch>=2){
						Nt[u]=true;
					}
				}else{
					if(low[x]>=num[u]){
						Nt[u]=true;
					}
				}
			}
		}
	}
}

void dfs(int u){
	vst[u]=true;
	sum++;
	for(int x:adj[u]){
		if(!vst[u]){
			dfs(x);
		}
	}
	times=times*sum;
	sum=0;
}

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==0){
			dfs(i,i);
		}
	}
	for(int i=2;i<=n;i++){
		if(Nt[i]==true){
			memset(vst,false,sizeof(vst));
			dfs(i);
		}
	}
	cout<<ans;
}
