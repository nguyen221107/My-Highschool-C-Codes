#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("DC.INP", "r",stdin);
	freopen("DC.OUT", "w",stdout);
	int t,n,cnt=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		if(n==1){
			cout<<0<<endl;
		}
		else if(n==2 || n==3){
			cout<<1<<endl;
		}else if(n==4){
			cout<<2<<endl;
		}else if(n==5){
			cout<<1<<endl;
		}
		else{
			if(n%2==0 && n>4){
				int l=1,r=n-1;
				while(r>=l){
					if(r%l==0 && r+l==n){
						cnt++;
						l++;
						r--;
					}else{
						l++;
						r--;
					}
				}
				cout<<cnt<<endl;
				cnt=0;
			}
			if(n%2!=0 && n>5){
				int l=1,r=n-1;
				while(r>l){
					if(r%l==0 && r+l==n){
						cnt++;
						l=l+2;
						r=r-2;
					}else{
						l=l+2;
						r=r-2;
					}
				}
				cout<<cnt<<endl;
				cnt=0;
			}
		}
	}
}
