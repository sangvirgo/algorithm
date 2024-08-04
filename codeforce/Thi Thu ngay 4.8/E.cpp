#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Thuật toán Quick-Sort đã rất nổi tiếng và quen thuộc với tất cả lập trình viên. Một trong vấn đề quan trọng là chọn phần từ chốt (pivot) sao cho phù hợp. Giả sử giá trị chốt là p thì sau bước phân hoạch dãy số mới sẽ như sau:

A black and white rectangular object with a heart  Description automatically generated

Với XL và XR là hai dãy con (có thể rỗng) của dãy số ban đầu. Giá trị trong XL ≤ p còn XR > p

Bài toán đặt ra cho bạn là hãy đếm và liệt kê các giá trị chốt thỏa mãn điều kiện nếu được chọn thì dãy số đã được phân hoạch từ trước.

Input

Chỉ có 1 dòng trong đó:

Số đầu tiên là số phần tử của dãy 1 ≤ N ≤ 106
N số tiếp theo là các giá trị trong dãy, các số đều nguyên dương phân biệt và không quá 106.
Output

Chỉ có 1 dòng trong đó:

Số đầu tiên là số M, số lượng các phần tử thỏa mãn điều kiện đề bài (M có thể bằng 0).
Tiếp theo là M số thỏa mãn lần lượt theo thứ tự trong dãy ban đầu.
Chú ý: nếu M lớn hơn 100 thì chỉ in ra 100 số đầu tiên.  
Ví dụ

Input

Output

10 1 11 8 13 53 20 63 99 79 94

3 1 13 63

 

Giải thích ví dụ: các phần từ chốt thỏa mãn: 

- Giá trí 1: bên trái rỗng, bên phải lớn hơn 1

- Giá trị 13: bên trái nhỏ hơn 13, bên phải lớn hơn 13

- Giá trị 63: bên trái nhỏ hơn 63, bên phải lớn hơn 63
*/


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leftMax(n), rightMin(n);

    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }

    rightMin[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], arr[i]);
    }

    vector<int> result;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || leftMax[i - 1] <= arr[i]) && (i == n - 1 || rightMin[i + 1] > arr[i])) {
            result.push_back(arr[i]);
        }
    }

    int m = result.size();
    cout << m << " ";
    for (int i = 0; i < min(m, MAX); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
