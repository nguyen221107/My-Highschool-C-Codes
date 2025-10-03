#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int rs[n],ap[m];
	for(int i=0;i<n;i++){
		cin>>rs[i];
	}
	sort(rs,rs+n);
	for(int i=0;i<m;i++){
		cin>>ap[i];
	}
	sort(ap,ap+m);
	int r=0,cnt=0,pre=0;
	for(int l=0;l<m;l++){
		if(r>=n){
			break;
		}
		if(ap[l]>=rs[r]-k){
			while(r<n){
				if(ap[l]<=rs[r]+k){
					cnt++;
					r++;
					break;
				}else{
					r++;
				}
			}
		}
	}
	cout<<cnt;
}
