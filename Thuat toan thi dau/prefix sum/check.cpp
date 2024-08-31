#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200003;

int n, k, q, d[MAXN], a[MAXN], s[MAXN];

void update(int l, int r) {
    ++d[l], --d[r + 1];
}


void buildPrefixSum() {
    a[0] = s[0] = 0;
    for (int i = 1; i < MAXN; i++) {
        a[i] = a[i - 1] + d[i];
        s[i] = s[i - 1] + (a[i] >= k);
    }
}

int query(int a, int b) {
    return s[b] - s[a - 1];
}

int main() {
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        update(l, r);
    }
    buildPrefixSum();
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        cout << query(a, b) << endl;
    }
}