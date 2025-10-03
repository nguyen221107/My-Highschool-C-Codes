#include <iostream>
using namespace std;

int tcs(int uoc)
{
	int sum=0;
	while(uoc!=0)
	{
		sum+=uoc%10;
		uoc/=10;
	}
	return sum;
}

int main()
{
	int a,b,uoc,ss=0;
	cin>>a>>b;
	for(int i=1;i<=a && i<=b;i++)
		if(a%i==0 && b%i==0)
			{
				uoc=i;
				if(ss<=tcs(uoc))
				{
					ss=tcs(uoc);
				}
			}
	cout<<ss;
}

