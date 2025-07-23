#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/P181PROC/

5 3
5 1 = 0
5 2 = 1
5 3 = 3
*/
int main() {
unsigned long long n, k; cin >> n >> k;
set<unsigned long long> remainders;

for(unsigned long long i=1; i<=k; i++) {
    unsigned long long remainder=n%i;

    if(remainders.find(remainder)!=remainders.end()) {
        cout << "NO" ;
        return 0;
    } else {
        remainders.insert(remainder);
    }
}

cout << "YES";
return 0;
}