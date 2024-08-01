#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy để liệt kê các cách phân tích số n
void listPartitions(int n, int k, vector<int>& current, vector<vector<int>>& results) {
    if (n == 0) {
        results.push_back(current);
        return;
    }
    if (k == 0 || n < 0) {
        return;
    }

    // Trường hợp bao gồm k trong phân tích
    current.push_back(k);
    listPartitions(n - k, k, current, results);
    current.pop_back();

    // Trường hợp không bao gồm k trong phân tích
    listPartitions(n, k - 1, current, results);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    vector<vector<int>> results; // Lưu trữ tất cả các cách phân tích
    vector<int> current; // Lưu trữ cách phân tích hiện tại

    listPartitions(n, n, current, results);

    cout << "So cach phan tich " << n << " la: " << results.size() << endl;
    cout << "Cac cach phan tich la: " << endl;

    for (const auto& partition : results) {
        for (int num : partition) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
