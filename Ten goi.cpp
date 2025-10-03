#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0,a[10000]={0},max=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(s[j]=='W' || s[j]=='A' || s[j]=='R'){
				count=0;
			}
			else{
				count++;
				if(count>=max){
					max=count;
					a[max]++;
				}
			}
		}
		count=0;
	} 
	if(a[max]!=0){
		cout<<max<<' '<<a[max];
	}else cout<<"NO";
}
