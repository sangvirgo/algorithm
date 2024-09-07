#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 101
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // Sắp xếp các hộp theo chiều tăng dần

    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int d = a[j] - a[i]; // Tính khoảng cách giữa hai hộp liên tiếp
            int length = a[i], count = 2; // Bắt đầu với hai hộp ban đầu a[i] và a[j]

            int prev = a[j]; // Hộp trước đó

            // Kiểm tra hộp tiếp theo để đảm bảo chênh lệch độ dài là d
            for (int k = j + 1; k < n; ++k) {
                if (a[k] - prev == d) {
                    prev = a[k];
                    length += a[k];
                    count++;
                }
            }

            // Tính chiều cao tối đa
            res = max(res, length);
        }
    }

    cout << res << endl;
    return 0;
}
