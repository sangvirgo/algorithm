#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 51; 

ll bell[MAX];

void computeBellNumbers() {
    bell[0] = 1; 
    for (int i = 1; i < MAX; i++) {
        bell[i] = 0;
        for (int j = 0; j < i; j++) {
            bell[i] += bell[j] * (ll)(tgamma(i+1) / (tgamma(j+1) * tgamma(i-j+1)));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    computeBellNumbers(); 

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        cout << bell[n] << "\n";
    }
    return 0;
}
