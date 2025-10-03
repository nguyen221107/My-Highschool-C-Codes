#include <bits/stdc++.h>
#define ii pair<int, int>
#define X first
#define Y second
const int N = 777;
using namespace std;
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int a[N][N];
bool was[N][N];
bool high[N * N];
ii Q[N * N];
int m, n, res;

void BFS(int xx, int yy) {
    int l = 1, r = 1, i, x, y;
    ii u;
    Q[1] = ii(xx, yy); was[xx][yy] = true;
    while (l <= r) {
        u = Q[l++];
        for(i=0; i<8; i++) {
            x = u.X + dx[i]; y = u.Y + dy[i];
            if (x < 0 || y < 0 || x > m || y > n) continue;
            if (!was[x][y] && a[x][y] == a[xx][yy]) {
                Q[++r] = ii(x, y); was[x][y] = true;
            }
            else
                if (a[xx][yy] < a[x][y]) high[res] = false;
        }
    }
}

int main()
{
    cin>>n>>m;
    int i, j, cnt = 0;
    for(i=1; i<=m; i++) for(j=1; j<=n; j++) cin>>a[i][j];
    for(i=1; i<=m; i++) for(j=1; j<=n; j++) if (!was[i][j]) {
        res++; high[res] = true; BFS(i, j);
    }
    for(i=1; i<=res; i++) if (high[i]) cnt++;
    cout<<cnt;
    return 0;
}
