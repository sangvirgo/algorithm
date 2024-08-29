#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI: PHÉP NHÂN
Cho mảng A chứa N số nguyên dương và M. Đếm xem có bao nhiêu bộ (p1, p2,... pk)
sao cho k>1, 1 ≤ p1 < p2 <...< pk ≤ N và A[p1] * A[p2] * ... * A[pk] = M

Input
Dòng đầu tiên chứa hai số nguyên dương N, M (2 ≤ N ≤ 10, M ≤ 109
)
Dòng tiếp theo chứa N phần tử của mảng A, giá trị không quá 109

Output
Xuất ra kết quả
Ví dụ:
Input: Output:
5 24
4 3 2 2 8
3
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int mask = 1; mask < (1 << n); mask++) {
        ll mul = 1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                mul *= a[i];
                count++;
            }
            if (mul > m) break;  
        }
        if (count > 1 && mul == m) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}