#include <bits/stdc++.h>
using namespace std;

int tich(int n){
	int c=1;
	int res;
	while(n>0){
		res=n%10;
		n=n/10;
		c*=res;
	}
	return c;
} 

int check(int n){
	int m=0;
	int d;
	while(n>0){
		d=n%10;
		n/=10;
		m++;
	}
	for(int i=0;i<m-1;i++){
		d=d*10;
	}
	return d;
}

int main(){
	freopen("brutichso.inp","r",stdin);
	freopen("brutichso.out","w",stdout);
	int n,ans;
	cin>>n;
	ans=tich(n);
	int res=n-1;
	int d=check(n);
	for(int i=0;i<10;i++){
		if(tich(res)>ans){
			ans=tich(res);
			break;
		}else{
			res--;
			n--;
		}
	}
	ans=max(tich(d-1),ans);
	cout<<ans;
}
