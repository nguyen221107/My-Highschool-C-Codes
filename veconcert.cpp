#include <bits/stdc++.h>
using namespace std;

void bs(int n,int m){
	int price[n],cus[m];
	bool bought[n]={false};
	for(int i=0;i<n;i++){
		cin>>price[i];
	}
	for(int i=0;i<m;i++){
		cin>>cus[i];
	}
	sort(price, price+n);
	int res;
	for(int i=0;i<m;i++){
		int l=0,r=n-1;
		res=-1;
		while(l<=r){
			int mid=(r+l)/2;
			if(price[mid]==cus[i]){
				res=mid;
				break;
			}
			if(price[mid]>cus[i]){
				r=mid-1;
			}
			if(price[mid]<cus[i]){
				if(bought[mid]!=true && res<mid){
					res=mid;
				}
				l=mid+1;
			}
		}
		if(bought[res]!=true && res>0){
			cout<<price[res]<<endl;
		}else cout<<-1<<endl;
		bought[res]=true;
	}

}
int main(){
	int n,m;
	cin>>n>>m;
	bs(n,m);
}
