#include <bits/stdc++.h>
using namespace std;

int solve(int n,int cnt){
	if(n>5){
		if(n%2!=0){
			cnt++;
			solve(n*3+1,cnt);
		}else if(n%2==0){
			cnt++;
			solve(n/2,cnt);
		}
	}else if(n==5){
		cnt+=5;
		return cnt;
	}else if(n<5){
		if(n==1){
			return cnt;
		}else if(n%2!=0){
			cnt++;
			solve(n*3+1,cnt);
		}else if(n%2==0){
			cnt++;
			solve(n/2,cnt);
		}
	}
}

int main(){
	freopen("brudayso.inp","r",stdin);
	freopen("brudayso.out","w",stdout);
	int n,cnt=1;
	cin>>n;
	cout<<solve(n,cnt);
}
