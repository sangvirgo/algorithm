#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000+5

/*
https://wiki.vnoi.info/algo/algebra/prime_sieve.md
*/
bool isPrime[MAX];

void Eratosthenes(int n) {
    for(int i=2; i<=n; i++) 
        isPrime[i]=true;

    for(int i=2; i*i<=n; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<=n; j+=i) {
                isPrime[j]=false;
            }
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n = 78;
Eratosthenes(n);

for(int i = 2; i <= n; i++) {
    if(isPrime[i]) 
        cout << i << " ";
}
return 0;
}