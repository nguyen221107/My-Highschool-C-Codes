#include <iostream>
using namespace std;

int main(){
	long long n,x,y,z,count=0;
	cin>>n;
	for(x=3;x<n;x++){
		for(y=2;y<x;y++){
			for(z=1;z<y;z++){
				if(x+y+z==n){
					count++;
				}
			}
		}
	}
	cout<<count;
}
//x,y,z>=1
//n>x>y>z
//x+y+z=n 
