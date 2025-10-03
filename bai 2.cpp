#include <bits/stdc++.h>
#define N 2000000
#define pii pair<int,int>
using namespace std;
pii a[N+2];
int n,ans;

int main(){
	int d=0;
	cin>>n;
	for(int l,r,i=1;i<=n;i++){
		cin>>l>>r;
		a[++d]={l,0};
		a[++d]={r,1};
	}
	sort(a+1,a+2*n+1);
	d=1;
	for(int i=2;i<=2*n;i++){
		if(d==0) ans+=a[i].first - a[i-1].first - 1;
		if(a[i].second==0) d++;
		else d--;
	}
	cout<<ans;
}
