#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int> s;
	int r,l=0,sum=0,cnt=0;
	int l1=0,r1=0;
	int pre=0;
	int dem[1001]={0};
	for(r=0;r<n;r++){
		dem[a[r]]++;
		if(dem[a[r]]==1) cnt++;
		while(cnt>k){
			if(dem[a[l]]==1) --cnt;
			dem[a[l]]--;
			l++;
		}
		if(sum<(r-l+1)){
			sum=(r-l+1);
			l1=l+1;
			r1=r+1;
		}
	}
	cout<<l1<<' '<<r1;
}
