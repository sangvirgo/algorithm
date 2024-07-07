#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        bool found = false;
        for (int j = 0; j < s.length() - 1; j++) {
            for (int len = 2; len <= s.length() - j; len++) {
                if (isPalindrome(s.substr(j, len))) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (found) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}