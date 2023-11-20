#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/
bool prime(int n) {
    if(n<2) return false;
        for(int i(2); i<=sqrt(n); i++) {
            if(n%i==0) {
                return false;
            }
    }
    return true;
}
bool superPrime(long long n) {
    while(n!=0) {
        if((!prime(n)) || n<2 || n==0) {
            return false;
        }
        else {
            n/=10;
        }
    }
    return true;
}

int main() {
long long n; cin >> n;
for(long long i(1); i<=n; i++) {
    if(superPrime(i)) {
        cout << i << " " ;
    }
}
return 0;
}