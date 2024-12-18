#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/pr5uch/problems/divisible
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;

while(t--){
    int d, n; cin >>d >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)  cin >> a[i];

    int res=0;
    ll sum=0;
    map<ll, ll> cnt;
    cnt[0]=1;

    for(int i=0; i<n; i++) {
        sum+=a[i];
        int mod=(sum%d+d)%d;
        res+=cnt[mod];
        cnt[mod]++;
    }
    cout << res << endl;
}
return 0;
}