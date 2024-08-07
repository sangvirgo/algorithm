#include <bits/stdc++.h>
using namespace std;

int heightDf(multiset<int>& arr) {
    if (arr.size() <= 1) return 0; // Handle single element case correctly
    return *arr.rbegin() - *arr.begin(); // Calculate height difference
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, le, d;
    cin >> n >> le >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int res = 0, l = 0, r = 0;
    multiset<int> temp;

    while (r < n) {
        // Extend the window to the right
        temp.insert(a[r]);
        r++;

        // Check if the current window meets the length requirement
        while ((r - l) >= le && heightDf(temp) <= d) {
            res++;

            // Continue extending to the right while it satisfies the conditions
            if (r < n) {
                temp.insert(a[r]);
                r++;
                if (heightDf(temp) > d) {
                    r--;
                    temp.erase(temp.find(a[r]));
                    break;
                }
                if ((r - l) >= le && heightDf(temp) <= d) res++;
            }
        }

        // Shrink the window from the left if it no longer satisfies the conditions
        while (heightDf(temp) > d && l < r) {
            temp.erase(temp.find(a[l]));
            l++;
        }

        // Move left pointer to maintain the length requirement
        if ((r - l) < le && r < n) {
            temp.insert(a[r]);
            r++;
        }
    }

    cout << res << endl;
    return 0;
}
