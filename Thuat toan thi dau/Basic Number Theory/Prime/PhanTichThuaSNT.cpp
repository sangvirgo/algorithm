#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000+5
/*

*/
int minPrime[MAX];
void sieve(int n) {
    for(int i=2; i*i<=n; i++) {
        if(minPrime[i]==0) {
            for(int j=i*i; j<=n; j+=i) {
                if(minPrime[j]==0) minPrime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++) {
        if(minPrime[i]==1) minPrime[i]=i;
    }
}

vector<ll> factorize(ll n) {
    vector<ll> res;
    for(ll i=2; i*i<=n; i++) {
        while(n%i==0) {
            res.push_back(i);
            n/=i;
        }
    }
    if(n>1) res.push_back(n);
    return res;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


int n; cin >> n;
vector<ll> res=factorize(n);

for(auto it: res) cout << it << " ";
return 0;
}