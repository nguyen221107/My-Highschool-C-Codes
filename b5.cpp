#include <bits/stdc++.h>
using namespace std;
long long n,t,c[105],p[105],dp[3000005],kq=1e9;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        t=t+p[i];
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
        dp[0]=dp[0]+c[i];///nguoi 1 khong lam gi de nguoi 2 lam het
    }
    for(int i=1;i<=t;i++) dp[i]= int(1e9);
    for(int i=1;i<=n;i++){
        for(int j=t;j>=p[i];j--){
            if(dp[j-p[i]]< int(1e9)){
                dp[j]=min(dp[j],dp[j-p[i]]-c[i]);}}}
    for(long long i=0;i<=t;i++){
        n=max(dp[i],i);
        kq=min(kq,n);
    }
    cout<<kq;
}
