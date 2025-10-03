#include <iostream>
using namespace std;

long long tong(long long n){
	long long tong=0,i;
	while(n!=0){
		i=n%10;
		tong+=i;
		n/=10;
	}
	return tong;
	
}
int main(){
	long long n;
	cin>>n;
	cout<<tong(n);
}
