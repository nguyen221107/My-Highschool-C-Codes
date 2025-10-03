#include <bits/stdc++.h>
using namespace std;

struct edge{
	int u,v;
	int w;
};
int n,m;
vector<edge> c;
int prnt[1001],size[1001];

void ms(){
	for(int i=1;i<=n;i++){
		prnt[i]=i;
		size[i]=1;
	}
}

int find(int v){
	if(v==prnt[v]){
		return v;
	}
	return prnt[v]=find(prnt[v]);
}

bool uni(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b) return false;
	if(size[a]<size[b]) swap(a,b);
	prnt[b]=prnt[a];
	size[a]+=size[b];
	return true;
}

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		edge e;
		e.u=x; e.v=y; e.w=z;
		c.push_back(e);
	}
}

bool cp(edge a,edge b){
	return a.w < b.w;
}

void kruskal(){
	vector<edge> mst;
	int d=0;
	sort(c.begin(),c.end(),cp);
	for(int i=0;i<m;i++){
		if(mst.size()==n-1){
			break;
		}
		edge e=c[i];
		if(uni(e.u,e.v)){
			mst.push_back(e);
			d+=e.w;
		}
	}
	cout<<d<<endl;
	for(auto k:mst){
		cout<<k.u<<' '<<k.v<<' '<<k.w<<endl;
	}
}

int main(){
	inp();
	ms();
	kruskal();
}


