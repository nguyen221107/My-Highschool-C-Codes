#include <bits/stdc++.h>
using namespace std;

int n,m,cnt=0;
bool vst[1001][1001];
char a[1001][1001];

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

void dfs(int i,int j){
	vst[i][j]=true;
	for(int k=0;k<4;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=1 && x<=n && y>=1 && y<=m && a[x][y]=='W' && !vst[x][y]){
			dfs(x,y);
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	memset(vst,false,sizeof(vst));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!vst[i][j] && a[i][j]=='W'){
				dfs(i,j);
				++cnt;
			}
		}
	}
	cout<<cnt;
}

