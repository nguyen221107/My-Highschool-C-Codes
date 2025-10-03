#include <bits/stdc++.h>
using namespace std;

int prnt[1001],size[1001];
int n;

void make_set(){
	for(int i=1;i<=n;i++){
		prnt[i]=i;
		size[i]=1;
	}
}

int find(int v){
	if(v==prnt[v]){
		return v;
	}
	return prnt[v] = find(prnt[v]);
}

void uni(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		if(size[a]<size[b]){
			swap(a,b);
		}
		prnt[b]=a;
		size[a]+=size[b];
	}
}

int main(){
	return 0;
}
