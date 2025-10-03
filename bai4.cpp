#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main()
{
	int n,count=0,i=0;
	cin>>n;
	
	int a[n];
	
	for (i=0;i<n;i++){
		
			cin>>a[i];
			
		}
		
	int x=a[0];
	for (i=1;i<n;i++)
		{
			x*=a[i];
		}
		
	for (i=1;i<=x;i++)
		{
			if (x%i==0)
				{
					count++;
				}
			
		}
	
	cout<<count;
	
}
