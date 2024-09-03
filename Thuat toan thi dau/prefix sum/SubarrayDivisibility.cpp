#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1662/
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<ll> a(n);
for(int i = 0; i < n; i++) cin >> a[i];

map<ll, ll> cnt;
ll sum=0;
ll ans=0;
cnt[0] = 1;

for(int i=0; i<n; i++) {
    sum+=a[i];
    int mod=(sum%n+n)%n;
    ans+=cnt[mod];
    cnt[mod]++;
}

cout << ans << endl;
return 0;
}