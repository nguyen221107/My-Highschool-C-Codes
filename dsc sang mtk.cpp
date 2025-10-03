#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,i,j;
	int m[100][100];
	cin>>a>>b;
	for(i=0;i<b;i++){
		int x,y;
		cin>>x>>y;
		m[x][y]=m[y][x]=1;
	}
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
			cout<< m[i][j] <<" ";
		}
		cout<<endl;
	}
}
