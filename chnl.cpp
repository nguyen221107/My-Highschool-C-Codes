#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==0) continue;
		if(a[i]==1){
			v.push_back(a[i]);
			continue;
		}
		int x=a[i];
		if(x%2==0){
			while(x%2==0){
				x/=2;
			}
			if(x==1) v.push_back(a[i]);
		}else if(x%3==0){
			while(x%3==0){
				x/=3;
			}
			if(x==1) v.push_back(a[i]);
		}else if(x%5==0){
			while(x%5==0){
				x/=5;
			}
			if(x==1) v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		int l,h;
		cin>>l>>h;
		int t = lower_bound(v.begin(),v.end(),l) - v.begin();
		int p = upper_bound(v.begin(),v.end(),h) - v.begin() - 1;
		cout<< p - t + 1<<endl;
	}
}
