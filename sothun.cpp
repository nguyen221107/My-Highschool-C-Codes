#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

ll lcm(ll a,ll b){
	return a*b/gcd(a,b);
}

ll f(ll mid,ll a,ll b){
	return mid/b + mid/a - mid/lcm(a,b);
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		ll l=1;
		ll r=1e18;
		ll res=-1;
		while (l<=r){
			ll mid=(l+r)/2;
			if(f(mid,a,b)>=n){
				res=mid;
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		cout<<res<<endl;
	}
}
