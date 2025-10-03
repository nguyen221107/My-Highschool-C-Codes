#include <bits/stdc++.h>
using namespace std;


int main(){
	int t,p=97,n;
	cin>>t;
	int m[27];
	for(int i=1;i<=26;i++){
		m[i]=p;
		p++;
	}
	for(int i=0;i<t;i++){
		cin>>n;
		int a=1,b=1,c=1;
		if(a+b+c!=n){
			while(c<=26){
				if(a+b+c==n){
					break;
				}else c++;
			}
			while(b<=26){
				if(a+b+c==n){
					break;
				}else b++;
			}
			while(a<=26){
				if(a+b+c==n){
					break;
				}else a++;
			}
		}
		printf("%c",m[a]);
		printf("%c",m[b]);
		printf("%c",m[c]);
		cout<<endl;
	}
}
