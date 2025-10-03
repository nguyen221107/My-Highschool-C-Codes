#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int i, j;
	cin>>s;
	int n = s.length();
	vector<int> L(n, 1);
	for (i=0; i=s.size()-1; i++){
		for (j=0; j=i-1; j++){
			if (s[i]>s[j]){
				L[i]=max(L[i],L[j])+1;
			}
		}
	}
	cout<<*max_element(L.begin(), L.end());
}
