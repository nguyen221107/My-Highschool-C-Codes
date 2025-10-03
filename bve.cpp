#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int n,m,sum=0,sum_cnt=1,id=0;
vector<int> adj[1001];
int low[1001],num[1001],mn[1001];
bool vst[1001];
stack<int> st;

void inp(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mn[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
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
		int nmin=INT_MAX;
		int cnt=0;
		while(w!=u){
			w=st.top();
			st.pop();
			vst[w]=false;
			if(mn[w]<nmin){
				nmin=mn[w];
				cnt=1;
			}else if(mn[w]==nmin){
				cnt++;
			}
		}
		sum+=nmin;
		sum_cnt=(sum_cnt * cnt)%MOD;
	}
	
}

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==-1){
			findSC(i);
		}
	}
	cout<<sum<<' '<<sum_cnt;
}
