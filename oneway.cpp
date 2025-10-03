#include <bits/stdc++.h>
using namespace std;

const int maxi=50001;
int n,m,cnt=0,cnt1=0;
pair<int,int> c[maxi*2];
vector <int> adj1[maxi],adj2[maxi];
bool vst[maxi];
int prnt[maxi],d[maxi],num[maxi],low[maxi];

void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		c[i]= make_pair(x,y);
		adj1[x].push_back(y);
		adj1[y].push_back(x);
	}
	memset(vst,false,sizeof(vst));
}

void dfs(int u){
	vst[u]=true;
	for(int v:adj1[u]){
		if(!vst[v]){
			d[v]=d[u]+1;
			prnt[v]=u;
			dfs(v);
		}
	}
}

void setup(){
	for(int i=1;i<=m;i++){
		int u=c[i].first;
		int v=c[i].second;
		if(prnt[v]==u) adj2[u].push_back(v);
		else if(prnt[u]==v) adj2[v].push_back(u);
			else if(d[u]<d[v]) adj2[v].push_back(u);
				else adj2[u].push_back(v);
	}
}

void findSC(int u){
	vst[u]=true;
	cnt++;
	num[u] = low[u] = cnt;
	for(int x:adj2[u]){
		if(vst[x]==true){
			low[u]=min(low[u],num[x]);
		}else if(vst[x]==false){
			findSC(x);
			low[u]=min(low[u],low[x]);
		}
	}
	if(low[u]==num[u]) cnt1++;
}

void tj(){
	memset(vst,false,sizeof(vst));
	for(int i=1;i<=n;i++){
		if(vst[i]==false){
			findSC(i);
		}
	}
}

void outp(){
	if(cnt1!=1) cout<<0;
	else{
		cout<<1 << endl;
		for(int i=1;i<=n;i++){
			for(int v:adj2[i]){
				cout<<i<<' '<<v<<endl;
			}
		}
	}
}

int main(){
	inp();
	dfs(1);
	setup();
	tj();
	outp();
}
//4 5
//1 2
//2 3
//2 4
//3 4
//1 4

//4 4
//1 2
//2 3
//3 4
//3 1
