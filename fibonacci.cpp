#include <iostream>
using namespace std;

int fibo(long long n)
{
	if (n<=2)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}

int main()
{
	long long n;
	cin>>n;
	cout<<fibo(n);
	return 0;
}
