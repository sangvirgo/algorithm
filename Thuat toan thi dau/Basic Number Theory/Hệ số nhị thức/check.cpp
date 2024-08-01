#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy tính số cách phân tích n thành tổng của các số nguyên dương nhỏ hơn hoặc bằng k
int countPartitions(int n, int k, vector<vector<int>>& dp) {
    if (n == 0) return 1; // Chỉ có một cách phân tích số 0
    if (k == 0) return 0; // Không có cách nào phân tích nếu k = 0 và n > 0
    if (dp[n][k] != -1) return dp[n][k]; // Kiểm tra nếu đã tính toán trước đó

    if (n >= k) {
        dp[n][k] = countPartitions(n - k, k, dp) + countPartitions(n, k - 1, dp);
    } else {
        dp[n][k] = countPartitions(n, k - 1, dp);
    }

    return dp[n][k];
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Khởi tạo bảng nhớ
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    // Kết quả là số cách phân tích n thành tổng của các số nguyên dương nhỏ hơn hoặc bằng n
    cout << "So cach phan tich " << n << " la: " << countPartitions(n, n, dp) << endl;

    return 0;
}
