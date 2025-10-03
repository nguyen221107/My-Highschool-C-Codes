#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5e5+5;
const ll mod=1e9+7;


const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};


int main(){
	
	ll n,m;
	cin>>m>>n;
	
	vector<vector<int>> a(m,vector<int> (n));
	vector<vector<int>> dp(m, vector<int>(n, 1));
	vector<tuple<int, int, int>> c;
	
	for(ll i=0;i<m;i++){
		for(ll j=0;j<n;j++){
			cin>>a[i][j];
			c.emplace_back(a[i][j],i,j);
		}
	}
	
	sort(c.begin(),c.end());
	
	for(ll i=0;i<m;i++){
		for(ll j=0;j<n;j++){
			dp[i][j]=1;
		}
	}
	
	for(auto cell : c){
		ll v=get<0>(cell);
		ll x=get<1>(cell);
		ll y=get<2>(cell);
		for(ll d=0;d<4;d++){
			ll nx=x+dx[d];
			ll ny=y+dy[d];
			if(nx>=0 && ny>=0 && nx<m && ny<n && a[nx][ny]<a[x][y]){
				dp[x][y]=max(dp[x][y],dp[nx][ny]+1);
			}
		}
	}
	int ans = 0;
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}

//3 3
//1 1 0
//1 2 3
//2 2 5
