#include<bits/stdc++.h>
using namespace std;

int n,m,cnt=0;
vector<int> adj[1001];
int low[1001],num[1001];
int eg=0,nt=0;
bool Nt[1001];

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
	memset(Nt,false,sizeof(Nt));
}

void tarjan(int u,int p){
	int ch=0;
	low[u] = num[u] = ++cnt;
	for(int x:adj[u]){
		if(x!=p){
			if(num[x]!=-1){
				low[u]=min(low[u],num[x]);
			}else 
			{
				tarjan(x,u);
				ch++;
				low[u]=min(low[u],low[x]);
				if(low[x]>=num[x]){
					eg++;
				}
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

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==-1){
			tarjan(i,i);
		}
	}
	for(int i=1;i<=n;i++){
		if(Nt[i]){
			nt++;
		}
	}
	cout<<nt<<' '<<eg;
}
