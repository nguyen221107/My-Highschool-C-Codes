#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long c){
	long long k=sqrt(c);
	if (c<=1){
		return false;
	}
	for (long long i=2;i<k;i++){
		if(k%i==0){
			return false;
		}
	}
	return true;
}

bool isSquare(long long n){
	if (n >= 0){
		long long k = sqrt(n);
		return(k*k==n);
	}
	return false;
}

int main(){
	long long a,b,count=0;
	cin>>a>>b;
	for ( long long i=a;i<=b;i++){
		if (isSquare(i) && isPrime(i)){
			count++;
		}
	}
	cout<<count;
}
