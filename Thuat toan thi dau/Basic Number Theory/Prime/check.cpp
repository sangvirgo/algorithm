#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 18446744073709600000
using u64=uint64_t;
using u128=__uint128_t;
/*
https://wiki.vnoi.info/algo/algebra/prime_sieve.md
*/
bool isPrime[MAX];

void Eratosthenes(u64 n) {
    for(u64 i=2; i<=n; i++) 
        isPrime[i]=true;

    for(u64 i=2; i*i<=n; i++) {
        if(isPrime[i]) {
            for(u64 j=i*i; j<=n; j+=i) {
                isPrime[j]=false;
            }
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}