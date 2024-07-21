#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000000

// Hàm tính GCD (Ước chung lớn nhất)
int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        vector<int> freq(MAXN + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int max_gcd = 1;
        
        // Kiểm tra từ số lớn nhất đến số nhỏ nhất
        for (int i = MAXN; i >= 1; i--) {
            int count = 0;
            // Tính tổng tần số các bội số của i
            for (int j = i; j <= MAXN; j += i) {
                count += freq[j];
            }
            // Nếu tần số lớn hơn hoặc bằng 2, cập nhật GCD lớn nhất
            if (count >= 2) {
                max_gcd = i;
                break;
            }
        }

        cout << max_gcd << endl;
    }
    
    return 0;
}
