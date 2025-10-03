#include <bits/stdc++.h>
using namespace std;

int cntuoc(int N)
{
    int dem = 0;
    if(N==1){
    	return 1;
	}
    for (int i = 1; i <=N/2; i++)
    {
        if (N % i == 0)
            dem++;
    }
    return dem+1;
}
int main(){
	freopen("TIMSO.INP","r",stdin);
	freopen("TIMSO.OUT","w",stdout);
	int n,m,res=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		res=res-cntuoc(a[i]);
	}
	int x;
	if((m-res)%n==0){
		x=(m-res)/n;
	}else if((m-res)%n!=0){
		x=((m-res)/n)+1;
	}
	cout<<x;
}
