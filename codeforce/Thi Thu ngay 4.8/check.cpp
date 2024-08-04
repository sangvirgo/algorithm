#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    vector<long long> prefix_sum(n + 1, 0);
    unordered_map<int, int> count;
    
    count[0] = 1;  // Để tính các tổng dãy con bắt đầu từ chỉ số 0
    long long result = 0;

    // Đọc dữ liệu và tính tổng prefix_sum
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        prefix_sum[i + 1] = (prefix_sum[i] + arr[i]) % m;
        
        // Tính số lượng cặp (L, R) thỏa mãn điều kiện
        result += count[prefix_sum[i + 1]];
        result %= MOD;

        // Cập nhật số lần xuất hiện của prefix_sum[i + 1]
        count[prefix_sum[i + 1]]++;
    }

    cout << result << endl;
    return 0;
}
