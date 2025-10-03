#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=4e5+5;
ll dp[N];
ll ch[N]={0};
ll a[N];

ll modtimes(ll x,ll a,ll m){
	if(a==0) return 0;
	if(a==1) return x%m;
	ll u= modtimes(x,a/2,m);
	u=(u+u)%m;
	if(a%2!=0){
		u=(u+x%m)%m;
	}
	return u;
}

ll modpower(ll x, ll n, ll m) {
    if (n == 0) 
        return 1%m; 
    ll u = modpower(x,n/2,m);  
    u = (modtimes(u,u,m))%m;
    if (n%2 != 0)
        u = (modtimes(u,x,m))%m;
    return u;
}

int main(){
    ll x,y,n,m;
    cin>>x>>y>>n>>m;
    ll a=(modpower(x,n,m))%m;
    ll b=(modpower(y,n,m))%m;
    ll ans=(a-b+m)%m;
    cout<<ans;
}
