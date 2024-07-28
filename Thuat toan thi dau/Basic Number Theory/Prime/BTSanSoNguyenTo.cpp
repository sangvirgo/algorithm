#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://wiki.vnoi.info/translate/he/Number-Theory-2
*/
void Eratosthenes(int l, int r) {
    vector<bool> isPrime(r-l+1, true);

    for(int i=2; i<=r; i++) {
        for(int j=max(i*i, (l+i-1)/i*i); j<=r; j+=i) {
            isPrime[j-l]=false;
        }
    }
    if(l<=1) isPrime[l-1]=false;

    for(int i=l; i<=r; i++) {
        if(isPrime[i-l]) cout << i << endl;
    }
    cout << endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int m, n; cin >> m  >> n;
    Eratosthenes(m, n);
}
return 0;
}