#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/
bool isPrime(int x) {
    if(x<=1) return false;
    if(x<=3) return true;
    if(x%2==0 || x%3==0) return false;
    for(int i=5; i*i<=x; i+=6) {
        if(x%i==0 || x%(i+2)==0) return false;
    }
    return true;
}

int findNearestPrime(int x) {
    if(x<2) return 2;

    int lower=x, upper=x;
    while(true) {
        if(isPrime(lower)) return lower;
        if(isPrime(upper)) return upper;
        lower--;
        upper++;
    }
}

int main() {
int n; cin >> n;
cout << findNearestPrime(n);
return 0;
}