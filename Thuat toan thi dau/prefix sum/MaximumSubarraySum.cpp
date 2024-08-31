#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200003
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1643
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<int> a(n);
for(int i=0; i<n; i++) {
    cin >> a[i];
}

vector<ll> prefixSum(MAX,0);
vector<ll> prefixMin(MAX,0);
for(int i=1; i<=n; i++) {
    prefixSum[i] = prefixSum[i-1] + a[i-1];
    prefixMin[i] = min(prefixMin[i-1], prefixSum[i]);
}

ll ans = -1e10;
for(int i=1; i<=n; i++) {
    ans=max(ans, prefixSum[i]-prefixMin[i-1]);
}

for(int i=1; i<=n; i++) {
    cout<<prefixSum[i]<<" ";
}
cout<<endl;

for(int i=1; i<=n; i++) {
    cout<<prefixMin[i]<<" ";
}
cout<<endl;

cout<<ans<<endl;
return 0;
}