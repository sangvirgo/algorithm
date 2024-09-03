#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1661
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x; cin >> n >> x;
vector<ll> a(n);

for(int i = 0; i < n; i++) cin >> a[i];

ll sum=0;
map<ll, int> cnt;
ll ans=0;
cnt[0] = 1;


for(int i=0; i<n; i++) {
    sum+=a[i];
    ans+=cnt[sum-x];
    cnt[sum]++;
}

cout << ans << endl;
return 0;
}