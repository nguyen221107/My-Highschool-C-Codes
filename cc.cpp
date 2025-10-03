#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool vst[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vst, false, sizeof(vst));
}

void dfs(int u){
	vst[u]=true;
	for(int v:adj[u]){
		if(!vst[v]){
			dfs(v);
		}
	}
}

void CC(){
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!vst[i]){
			++ans;
			dfs(i);
		}
	}
	if(ans==1){
		cout<<"Lien thong"<<endl;
	}else cout<<"Khong lien thong"<<endl;
	cout<<"So thanh phan lien thong "<<ans;
}

int main(){
	inp();
	CC();
}

