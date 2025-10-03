#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
 
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int k;
    int count = 0;
    
    cin >> k;
    for(int i=2;i*i<=k;i++){
    	if(isPrime){
    		count++;
		}
	}
    
   
    cout<<count;
    return 0;
}
