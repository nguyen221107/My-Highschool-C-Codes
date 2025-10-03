#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> dsk[100];
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
			if(m[i][j]==1){
				dsk[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=a;i++){
		cout<<i<<" : ";
		for(int c : dsk[i]){
			cout<<c<<" ";
		}
		cout<<endl;
	}
}
