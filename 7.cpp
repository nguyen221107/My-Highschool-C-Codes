#include <bits/stdc++.h>
using namespace std;

int n,sy,sx,dy,dx;
bool vst[1001][1001];
int a[1001][1001];

int dy1[4]={-1,0,0,1};
int dx1[4]={0,-1,1,0};

void dfs(int y, int x){
	vst[y][x]=true;
	for(int k=0;k<4;k++){
		int y1=y+dy1[k];
		int x1=x+dx1[k];
		if(y1>=1 && x1>=1 && y1<=n && x1<=n && !vst[y1][x1] && a[y1][x1]==0){
			dfs(y1,x1);
		}
	}
}

void inp(){
	cin>>n>>sy>>sx>>dy>>dx;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	memset(vst,false,sizeof(vst));
	dfs(sy,sx);
	if(vst[dy][dx]==true){
		cout<<"YES";
	}else cout<<"NO";
}

int main(){
	inp();
}
