#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    cin >> s;

    int t; 
    cin >> t;
    vector<int> freq(s.length() + 1, 0);

    while (t--) {
        int x; 
        cin >> x;
        freq[x - 1]++;
        freq[s.length() - x]--;
    }

    int flip = 0;
    for (int i = 0; i < s.length() / 2; ++i) {
        flip += freq[i];
        if (flip % 2 != 0) {
            swap(s[i], s[s.length() - 1 - i]);
        }
    }

    cout << s;
    return 0;
}
