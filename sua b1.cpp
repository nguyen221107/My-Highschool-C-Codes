#include <iostream>
#include <string>
using namespace std;

int tong(string str){
    int tong = 0;
    for(int i = 0; i < str.length(); i++){
        tong += str[i] - '0';
    }
    return tong;
}

int main(){
    string str;
    cin >> str;
    cout << tong(str);
    return 0;
}
