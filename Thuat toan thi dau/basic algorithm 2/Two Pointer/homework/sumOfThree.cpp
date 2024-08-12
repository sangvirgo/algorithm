#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1641/
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x;
cin >> n >> x;
vector<int> a(n+1);
map<int, vector<int>> mp;
for(int i = 1; i <= n; i++) {
    cin >> a[i];
    mp[a[i]].push_back(i);
}

sort(a.begin(), a.end());
for(int i=1; i<=n-2;  i++) {
    int l = i+1, r = n;
    while(l < r) {
        if(a[i] + a[l] + a[r] == x) {
            if(a[i]==a[l] && a[i]==a[r]) {
                cout << mp[a[i]][0] << " " << mp[a[i]][1] << " " << mp[a[i]][2] << endl;
            } else if(a[i]==a[l]) {
                cout << mp[a[i]][0] << " " << mp[a[i]][1] << " " << mp[a[r]][0] << endl;
            } else if(a[l]==a[r]) {
                cout << mp[a[i]][0] << " " << mp[a[l]][0] << " " << mp[a[l]][1] << endl;
            } else {
                cout << mp[a[i]][0] << " " << mp[a[l]][0] << " " << mp[a[r]][0] << endl;
            }
            return 0;
        } else if(a[i] + a[l] + a[r] < x) {
            l++;
        } else {
            r--;
        }
    }
}
cout << "IMPOSSIBLE" << endl;
return 0;
}
