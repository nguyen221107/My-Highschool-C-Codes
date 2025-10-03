#include <iostream>
using namespace std;

int main(){
	int k,n,x,i,count=0,d,j;
	int a[k];
	
	cin>>k;
	
	for(i=0;i<k;i++){
		
		cin>>n>>x;
		
		for(d=n;d<=x;d++){
			if(d%n==0){
				count++;		
			}
		}
			a[i]=count;
			count=0;
	}
	
	for(j=0;j<k;j++){
		cout<<a[j]<<endl;
	}
}
	
	
	
	

