#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,i,j;
	vector<int> dsk[100];
	cin>>a>>b;
	for(i=0;i<b;i++){
		int x,y;
		cin>>x>>y;
		dsk[x].push_back(y);
		dsk[y].push_back(x);
	}
	for(i=1;i<=a;i++){
		cout<<i<<" : ";
		for(int c : dsk[i]){
			cout<<c<<" ";
		}
		cout<<endl;
	}
} 
