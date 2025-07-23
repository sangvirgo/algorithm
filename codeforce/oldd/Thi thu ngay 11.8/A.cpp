#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 4A - GHÉP HÌNH

Cho 3 hình chữ nhật có kích thước tương ứng là: A[i] x B[i] (i = 1, 2, 3). Hỏi 3 hình chữ nhật trên có thể ghép thành một hình vuông không? Nếu ghép được hãy cho biết độ dài cạnh hình vuông đó, ngược lại ghi số 0.

Input:

Dữ liệu đầu vào gồm có 3 dòng.

Mỗi dòng chứa 2 số nguyên là kích thước của hình chữ nhật (1 ≤ A[i], B[i] ≤ 109).

Output: 

In ra diện tích hình vuông mới tìm được, in ra 0 trong trường hợp không thể ghép được.

Test ví dụ:

Input:

Output

1 6

6 2

3 6

6

1 6

6 2

2 4

0

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int a, b, c, d, e, f; cin >> a>> b >>c>>d>>e>>f;
if(a>b) swap(a, b);
if(c>d) swap(c, d);
if(e>f) swap(e, f);

if (b == d && d == f && (a + c + e) == b) {
    cout << b;
    return 0;
}

int maxValue=max(max(a, max(b, c)), max(d, max(e, f)));
int sum=a*b+c*d+e*f;


if(sum==maxValue*maxValue) cout<<maxValue;
else cout<<0;
return 0;
}