#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,sg;
	getline(cin, s);
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[i-1]){
			sg+=s[i];
		}
	}
	cout<<sg;
}
