#include <iostream>
using namespace std;

int isPrime(long long n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	long long n,i,count=0;
	cin>>n;
	for(i=2;i<=n;i++){
		if(n%i==0 && isPrime(i)){
			count++;
		}
	}
	cout<<count;
}
