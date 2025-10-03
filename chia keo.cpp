#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* 
	Giai thich:
	- Bai 4 tuong kho nhung kha de, chu yeu la 1 bai toan chia keo don gian
	- Ta tim tong so luong keo cua An va cua cac em gai sau 
	  do chia cho n+1, n+1 o day la so luong em gai cua An va tinh ca An
	- Neu tong so keo (sum = tong so keo) chia het cho n+1 VA thuong cua sum va n+1 lon hon hoac bang
	  so keo lon nhat ma 1 em gai cua An dang co --> YES
	- Neu khong --> NO 
	
	  VD: An co 3 nguoi em, tong so keo cua An va cac em gai la 12 --> neu chia deu thi moi nguoi se co 3 vien keo.
	  	  Nhung lai co 1 em gai co 4 vien keo, theo de, nguoi em se khong chia 
		  so keo cua minh --> khong the chia deu moi nguoi 3 vien vi co 1 nguoi em co 4 vien keo.
		  Ket qua ==> NO 
*/

int main(){
	int t,n,x;
	string s;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n>>x;
		ll sum = x;
		int count = 0;
		for(int j=0;j<n;j++){
			int a = 0;
			cin>>a;
			sum += a;
			count = max(count, a);
		}
		if(sum % (n+1) == 0 && sum / (n+1) >= count){
			s += "YES\n";
		}else s += "NO\n";
	}
	cout<<s;
}
