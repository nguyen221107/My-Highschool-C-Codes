#include <iostream>
using namespace std;

int main(){
	long long  k,n,x,count=0;
	int j,i;
	long long a[k];
	
	cin>>k;
	
	for(i=0;i<k;i++){
		
		cin>>n>>x;
		count=x/n;
		a[i]=count;
		count=0;
	}
	
	for(j=0;j<k;j++){
		cout<<a[j]<<endl;
	}
}
