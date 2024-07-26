#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*

*/
vector<bool> sieve(ll L, ll R) {
    ll sqrtR=sqrt(R);
    vector<bool> mark(sqrtR+1, 0);
    vector<ll> primes;

    for(ll i=2; i<=sqrtR; i++) {
        if(!mark[i]) {
            primes.push_back(i);
            for(ll j=i*i; j<=sqrtR; j+=i) {
                mark[j]=true;
            }
        }
    }

    vector<bool> isPrime(R-L+1, 1);
    for(ll i: primes) {
        for(ll j=max(i*i, (L+i-1)/i*i); j<=R; j+=i) 
            isPrime[j-L]=false;
    }

    if(L==1) isPrime[0]=false;
    return isPrime;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll R, L; cin >> L>> R;
vector<bool> result=sieve(L, R);

for (ll i = 0; i < result.size(); i++) {
    if (result[i]) {
        cout << (L + i) << " ";
    }
}

return 0;
}