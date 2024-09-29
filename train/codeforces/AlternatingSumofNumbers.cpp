#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/problemset/problem/2010/A
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int sum=a[0];
    for(int i=1; i<n; i++) {
        if(i&1) sum-=a[i];
        else sum+=a[i];
    }
    cout << sum << endl;
}
return 0;
}