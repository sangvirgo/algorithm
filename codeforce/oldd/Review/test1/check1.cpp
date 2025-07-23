#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    cin >> s;
    vector<int> cnt(26, 0);

    for (char c: s) {
        cnt[c - 'a']++;
    }

    sort(cnt.begin(), cnt.end());

    int distinct = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            distinct++;
        }
    }

    if (distinct <= 2) {
        cout << 0 << endl;
        return 0;
    }

    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0 && distinct > 2) {
            res += cnt[i];
            distinct--;
        }
    }

    cout << res << endl;
    return 0;
}
