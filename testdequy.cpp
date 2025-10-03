#include <iostream>
using namespace std;

int test(int count)
{ 
	if (count==1)
		return 1;
	else
		return count + test(count-1);
}
int main()
{
	int count;
	cin>>count;
	cout<<test(count);
	return 0;
}
