#include <bits/stdc++.h>
using namespace std;

const int N=2e5+100;
int n, a[N];

bool check(int a,int b,int c){
	if((a+b>c)&&(a+c>b)&&(b+c>a))
		return true;
	else
		return false;
}
int sol(int n){
	int mau=1,tu=1;
	for(int i=1;i<=(n-2);i++){
		mau=mau*i;
	}
	tu=mau*(n-1)*n;
	int ans;
	ans=(tu)/(2*mau);
	return ans;
}
int main(){
//	freopen("DEMTAMGIAC.INP","r",stdin);
//	freopen("DEMTAMGIAC.OUT","w",stdout);
	int ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	for(int i=0;i<=n-3;i++){
		if(i==n-3){
			if(check(a[i],a[i+1],a[i+2])==true){
				ans=1;
				break;
			}
		}else
		if(check(a[i],a[i+1],a[i+2])==true){
			ans=sol(n-i-1);
			break;
		}
	}
	cout<<ans;
}
