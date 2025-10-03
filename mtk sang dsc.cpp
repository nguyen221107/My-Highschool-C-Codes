#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>> dsc;
	int a;
	int m[100][100];
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			cin>>m[i][j];
		}
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(m[i][j]==1 && i<j){
				dsc.push_back({i,j});
			}
		}
	}
	for(auto it:dsc){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
