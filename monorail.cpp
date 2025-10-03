#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int n,m,sum=0,sum_cnt=1,id=0,ans,l3=0,l1=0;
vector<int> adj[1001];
int low[1001],num[1001],prnt[1001],con[1001];
bool vst[1001];
stack<int> st;

void inp(){
	memset(prnt,0,sizeof(prnt));
	memset(con,0,sizeof(con));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		prnt[y]++;
		con[x]++;
	}
	memset(low,-1,sizeof(low));
	memset(num,-1,sizeof(num));
	memset(vst,false,sizeof(vst));
}


void findSC(int u){
	num[u] = low[u] = ++id;
	st.push(u);
	vst[u]=true;
	for(int x:adj[u]){
		if(vst[x]==true){
			low[u]=min(low[u],num[x]);
		}else if(num[x]==-1){
			findSC(x);
			low[u]=min(low[u],low[x]);
		}
	}
	int w;
	if(low[u]==num[u]){
		while(w!=u){
			w=st.top();
			st.pop();
			vst[w]=false;
			if(prnt[w]==0 || con[w]==0){
				if(prnt[w]==0){
					l1++;
				}
				else if(con[w]==0){
					l3++;
				}
			}
		}
	}
}

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==-1){
			findSC(i);
		}
	}
	ans=max(l1,l3);
	cout<<ans;
}
