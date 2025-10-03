#include <bits/stdc++.h>
using namespace std;
#define c 1000000007
#define ll long long

int T,n;
int nt[100001],prime[100001];
bool check[100001];

/* Giai thich:
	- So co can bac 3 la: so khi phan tich ra thua so nguyen to, so mu cua cac thua so phai chia het cho 3
	Tu do: ta xay dung cac ham de phan tich thua so nguyen to roi nhan lai voi nhau
	Buoc a: la buoc de lay so mu cua thua so nguyen to cua uoc lon nhat co can bac 3 cua n
 */


void snt(){
	memset(check, true, sizeof(check));
    int point = 1;
    for (int i = 2; i <= 100000; i++) {
        if (check[i]) {
            prime[point] = i;
            point++;
            for (int j = i + i; j <= 100000; j += i) check[j] = false;
        } 
    }
}

ll cal(int i, int n){
	ll s=1;
	for(int j=1;j<=n;j++){
		s=(s*i)%c;
	}
	return s;
}

ll ans(int n){
	memset(nt, 0, sizeof(nt));
	for (int i = 2; i <= n; i++) {
        int p = i, j = 1;
        while (p != 1) {
            while (p % prime[j] == 0) {
                p /= prime[j];
                nt[prime[j]]++;
            }
            j++;
        }
    } /* Buoc a*/

    long a = 1;
    for (int i = 2; i <= n; i++) {
        if (nt[i] >= 3) {
            a = (a * cal(i, nt[i] - (nt[i] % 3))) % c;
        }
    }

    return a;
}

int main(){
	int a[T];
	snt();
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>n;
		a[i]=ans(n);
	}
	for(int i=0;i<T;i++){
		cout<<a[i];
	}
}
