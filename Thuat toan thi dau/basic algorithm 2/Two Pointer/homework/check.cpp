#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Duyệt qua từng phần tử a[i]
    for (int i = 0; i < n; i++) {
        unordered_set<int> s;
        int target = x - a[i];
        for (int j = i + 1; j < n; j++) {
            if (s.find(target - a[j]) != s.end()) {
                // Tìm thấy 3 phần tử có tổng bằng x
                cout << i + 1 << " " << j + 1 << " " << find(a.begin(), a.end(), target - a[j]) - a.begin() + 1 << endl;
                return 0;
            }
            s.insert(a[j]);
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
