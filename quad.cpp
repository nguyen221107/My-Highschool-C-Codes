#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,cal,count=0;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	int b[N];
	for(int i=0;i<N-1;i++){
		b[i]=a[0]-a[i+1];
	}
	for(int i=1;i<N-1;i++){
		for(int j=2;j<N;j++){
			cal=a[i]-a[j];
			for(int k=0;k<N-1;k++){
				if(cal==b[k]){
					count++;
				}
			}
		}
	}
	if(count==0) cout<<0;
	else if (count-3<0) cout<<0;
	else cout<<count-3;
}
