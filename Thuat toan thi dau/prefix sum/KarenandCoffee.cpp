#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200003
const int MOD = 1e9 + 7;
/*
https://codeforces.com/contest/816/problem/B

3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100

*/
vector<int> d(MAX,0), a(MAX,0), s(MAX,0);
int n, k, q; 

void update(int l, int r) {
    d[l]++;
    d[r+1]--;
}

void buildPrefixSum() {
    for(int i=1; i<MAX; i++) {
        a[i]=a[i-1]+d[i];
        s[i]=s[i-1]+(a[i]>=k);
    }
}

int query(int a, int b) {
    return s[b]-s[a-1];
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >> n >> k >> q;
for(int i=0; i<n; i++) {
    int l, r; cin >> l >> r;
    update(l, r);
}
buildPrefixSum();
for(int i=0; i<q; i++) {
    int a, b; cin >> a >> b;
    cout << query(a, b) << endl;
}
return 0;
}