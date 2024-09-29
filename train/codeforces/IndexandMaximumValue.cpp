#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/problemset/problem/2007/B
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int n, m; cin >> n >> m;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<vector<ll>> operations(m, vector<ll>(3, 0));
    for(int i=0; i<m; i++) {
        char c; int l, r;
        cin >> c >> l >> r;
        if(c=='-') operations[i][0]=-1;
        else operations[i][0]=1;
        operations[i][1]=l;
        operations[i][2]=r;
    }

    vector<ll> result;
    for(auto it: operations) {
        ll maxValue=0;
        int c=it[0];
        int l=it[1];
        int r=it[2];

        for(int i=0; i<n; i++) {
            if(a[i]>=l && a[i]<=r) a[i]+=c;
            maxValue=max(maxValue, a[i]);
        }
        result.push_back(maxValue);
    }

    for(auto it: result) cout << it << " ";
    cout << endl;
}
return 0;
}