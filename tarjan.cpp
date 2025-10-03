#include <bits/stdc++.h>
using namespace std;

int n,m,cnt=0;
vector<int> adj[1001];
int low[1001],num[1001];
stack<int> st;
bool vst[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(low,-1,sizeof(low));
	memset(num,-1,sizeof(num));
	memset(vst,false,sizeof(vst));
}


void findSC(int u){
	num[u] = low[u] = ++cnt;
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
			cout<<w<<' ';
		}
		cout<<endl;
	}
}

int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(num[i]==-1){
			findSC(i);
		}
	}
}
