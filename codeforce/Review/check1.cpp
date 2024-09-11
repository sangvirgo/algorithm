#include <iostream>
#include <vector>
#include <algorithm>

int maxHeight(const std::vector<int>& a) {
    int n = a.size();
    std::vector<int> dp(n, 0); // Mảng dp lưu chiều cao lớn nhất có thể tại vị trí i
    int max_height = 0; // Chiều cao tối đa của cây thông

    // Sắp xếp các hộp theo thứ tự tăng dần của cạnh a_i
    std::vector<int> sorted_a = a;
    std::sort(sorted_a.begin(), sorted_a.end());

    // Tìm cách xếp chồng tối ưu
    for (int i = 0; i < n; ++i) {
        dp[i] = sorted_a[i]; // Chiều cao tối thiểu khi chỉ sử dụng hộp i
        for (int j = 0; j < i; ++j) {
            if (sorted_a[i] > sorted_a[j]) {
                dp[i] = std::max(dp[i], dp[j] + sorted_a[i]);
            }
        }
        max_height = std::max(max_height, dp[i]);
    }
    
    return max_height;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cout << maxHeight(a) << std::endl;

    return 0;
}
