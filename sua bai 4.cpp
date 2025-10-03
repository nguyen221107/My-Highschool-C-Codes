#include<bits/stdc++.h>
using namespace std; 
long long f[1000001];
int main()
{
	long long k, ans=0, d=0;
	string a;
	cin>>k; cin>>a;
	f[0]=1;//truong hop dac biet
	for(int i=0;i<a.size();i++)
		{
			if(a[i]=='1'){
				d++;
			}
			if(d>=k){
				ans+=f[d-k];
			}
			f[d]++; 
		 } 
	cout<<ans;
 } 
