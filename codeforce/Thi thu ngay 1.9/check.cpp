#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000006 // Kích thước tối đa cho các mảng
ll a[200005], n, res, f[MAX]; // `f` để đếm tần suất của các số
int i, j;
bool check[MAX]; // Mảng đánh dấu các số đã được xử lý

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(f, 0, sizeof(f)); // Đặt toàn bộ mảng `f` về 0
    memset(check, false, sizeof(check)); // Đặt toàn bộ mảng `check` về false

    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        f[a[i]]++; // Đếm số lần xuất hiện của mỗi số
    }

    sort(a + 1, a + n + 1); // Sắp xếp dãy `a` để kiểm tra từ nhỏ đến lớn

    for (i = 1; i <= n; i++) {
        if (f[a[i]] != 0) { // Nếu số này vẫn còn trong dãy
            if (f[a[i]] == 1) res++; // Nếu chỉ xuất hiện một lần, chắc chắn thỏa mãn điều kiện
            if (check[a[i]]) continue; // Nếu số này đã được xử lý, bỏ qua
            check[a[i]] = true; // Đánh dấu số này đã được xử lý
            for (j = a[i]; j <= 1000000; j += a[i]) {
                f[j] += 2; // Đánh dấu các bội của `a[i]` không thỏa mãn điều kiện
            }
        }
    }

    cout << res;
    return 0;
}
