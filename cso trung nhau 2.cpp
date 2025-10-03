#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int k,int t){
	int a[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	multiset<int> s;
	for(int j=0;j<k;j++){
		auto it = s.lower_bound(a[j]-t);
		if( it!=s.end() && *it <= a[j]+t){
			return true;
		}
		s.insert(a[j]);
	}
	for(int j=k;j<n;j++){
		s.erase(s.find(a[j-k]));
		auto it = s.lower_bound(a[j]-t);
		if( it!=s.end() && *it <= a[j]+t){
			return true;
		}
		s.insert(a[j]);
	}
	return false;
}
int main(){
	int n,k,t;
	cin>>n>>k>>t;
	if(solve(n,k,t)) cout<<"YES";
	else cout<<"NO";
}
