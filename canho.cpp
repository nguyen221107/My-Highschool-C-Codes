#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int nd[n],ch[m];
	bool f[n]={false};
	for(int i=0;i<n;i++){
		cin>>nd[i];
	}
	for(int i=0;i<m;i++){
		cin>>ch[i];
	}
	int l,r=0,cnt=0;
	for(int l=0;l<m;l++){
		while(r<n){
			if(ch[l]>=nd[r]-k && ch[l]<=nd[r]+k && f[r]==false){
				cnt++;
				f[r]=true;
				break;
			}else{
				r++;
			}
		}
		r=0;
	}
	cout<<cnt;
}
