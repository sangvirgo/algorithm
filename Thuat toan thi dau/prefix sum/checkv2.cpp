#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int res = 0;
    int total_sum = 0; // tổng của toàn bộ mảng
    for (int i = 0; i < n; ++i) {
        total_sum += a[i];
    }
    

    
    // Nếu tổng <= 0, kiểm tra từng vị trí
    for (int j = 0; j < n; ++j) {
        int current_sum = 0; // tổng tạm thời cho mỗi vị trí j
        bool is_good = true;
        
        // Kiểm tra từ vị trí j
        for (int i = 0; i < n; ++i) {
            current_sum += a[(j + i) % n];
            if (current_sum <= 0) {
                is_good = false;
                break;
            }
        }
        
        if (is_good) {
            res++;
        }
    }
    
    cout << res;
    return 0;
}
