#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int dem[1001] = {0};
	int r,l=0;
	int cnt=0,sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int r=0;r<n;r++){
		dem[a[r]]++;
		if(dem[a[r]]==1) cnt++;
		while(cnt>k){
			if(dem[a[l]]==1) cnt--;
			dem[a[l]]--;
			l++;
		}
		sum+=r-l+1;
	}
	cout<<sum;
}
