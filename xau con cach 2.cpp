#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k,i,j,n,d=0,c=0;
	cin>>k;
	string s;
	cin>>s;
	for (i=0;i<s.length();i++){
		for (j=i;j<s.length();j++){
			for (n=i;n<=j;n++){
				if(s[n]=='1'){
					d++;
				}
			}
			if (d==k){
				c++;
			}
			d=0;
		}
	}
	cout<<c;
}
