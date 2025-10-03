
#include <iostream>
#include <fstream>
using namespace std;

int UCLN(int a,int b){
	if (a == 0 || b == 0) 
	return a + b;	
	return(b,a%b);
}

int main(){
	int n,i;
	ifstream f1("gcda.txt");
	f1>>n;
	int a[n];
	for (i=0;i<n;i++){
		f1>>a[i];
	}
	f1.close();
	int ucln=a[0];
	for (i=1;i<n;i++){
		ucln= UCLN(ucln,a[i]);
	}
	ofstream f2("GCDA.OUT");
	f2<<ucln;
	f2.close();
	cout<<ucln;
}
