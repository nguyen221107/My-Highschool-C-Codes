#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    string str;
    int count[255] = {0};
    string result;
    for (i=0;i<n;i++){
     	cin>>str;
        for ( int j = 0; j < str.length(); j++) {
        	count[str[j]]++;
    	}
    	for ( int k = 65; k <= 90; k++) {
        	if (count[k] == 1) { 
            result += char(k);
        	}
    	}
		for ( int f = 65; f<=90; f++){
			count[f]=0;
		}
		str="";
    }
  	cout<<result;
}
