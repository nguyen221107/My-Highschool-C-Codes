#include <bits/stdc++.h>
using namespace std;
#define l long long

bool prime(l x){
	if(x<2){
		return false;
	}
	for(l i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

bool check(l x){
	l n,s=0;
	while(x!=0){
		n=x%10;
		s=s+(n*n);
		x/=10;
	}
	if(prime(s)){
		return true;
	}
	return false;
}

int main(){
	l T,n,ans[T];
	cin>>T;
	for(l i=0;i<T;i++){
		cin>>n;
		n+=1;
		while(true){
			if(check(n)){
				ans[i]=n;
				break;	
			}
			n+=1;
		}
	}
	for(l i=0;i<T;i++){
		cout<<ans[i]<<endl;
	}
}
