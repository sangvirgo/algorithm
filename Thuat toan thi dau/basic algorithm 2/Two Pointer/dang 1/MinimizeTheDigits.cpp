#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/problemset/problem/1251/C

3
0709
1337
246432


out
0079
1337
234642

*/
void solve() {
    string s; cin >> s;
    vector<int> odd, even;

    for(int i=0; i<s.size(); i++) {
        if((int)s[i]-'0' &1) odd.push_back((int)s[i]-'0');
        else even.push_back((int)s[i]-'0');
    }

    int i=0, j=0;
while(i<odd.size() || j<even.size()) {
    if(j==even.size() || (i<odd.size() && odd[i] <= even[j]))  cout << odd[i++];
    else cout << even[j++];
}
    cout << endl;
    return;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    solve();
}
return 0;
}