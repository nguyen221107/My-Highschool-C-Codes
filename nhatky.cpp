#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
	int m=0,k,cnt=0,ch=0,pre=0,c=0;
	cin>>n;
	cin.ignore();
	int a[n];
	string s;
	getline(cin,s);
	cin>>k;
	for(int i=0;i<=s.size();i++){
		if(m<n){
			if(int(s[i])==45){
				ch=1;
			}
			if(isdigit(char(s[i]))){
				c=1;
				if(ch!=1){
				    if(pre>=0){
						pre=(pre*10) + (int(s[i])-48);
				    }else{
				        pre=(pre*10) - (int(s[i]-48));
				    }
				}else{
					pre=(0-(pre*10))-(int(s[i])-48);
					ch=0;
				}
			}else{
				if(ch!=1 && c!=0){
					a[m]=pre;
					pre=0;
					++m;
					c=0;
				}else{
					pre=0;
					c=0;
				}
			}
		}
	}
	for(int i=0;i<(n-1);i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])==k){
				cnt++;
			}
		}
	}
	cout<<cnt;
}
