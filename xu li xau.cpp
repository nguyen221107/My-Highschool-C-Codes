#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int c=0,i=0;
	string a;
	getline(cin,a);
	while(i<a.size()){
		if(a[i]==' ' && a[i]==a[i+1]){
			a.erase(i,1);
		}else i++;
	}
	if(a[0]==' ') a.erase(0,1);
	if(a[a.size()-1]==' ') a.erase(a.size()-1,1);
	a[0]=toupper(a[0]);
	for(i=0;i<a.size();i++){
		if(a[i]==' '){
			a[i+1]=toupper(a[i+1]);
		}
	}
	cout<<a;
}
