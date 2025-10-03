#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int l=0,r=s.length()-1,mid=(l+r)/2;
	while(l<r && mid!=l){
		if(s[mid]=='0'){
			l=mid+1;
		}else if(s[mid]!='0'){
			r=mid-1;
		}
		mid=(l+r)/2;
	}
	cout<<mid+1;
}
