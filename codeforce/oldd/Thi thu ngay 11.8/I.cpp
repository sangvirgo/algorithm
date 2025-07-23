#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho dãy ký tự dấu cộng (+) và trừ (-).

Với mỗi truy vấn gồm hai số a và b, hãy kiểm tra xem có cách nào lựa chọn trong hai số này kèm theo mỗi dấu cộng trừ thì ta được một dãy số có tổng bằng 0 hay không.

Ví dụ trong test 1 dưới đây, dãy ký tự là +-+---+-

Với hai số a = 2 và b = 1, ta có thể có cách lựa chọn:

{+1, -1, +2, -1, -1, -1, +2, -1} cho giá trị tổng bằng 0.

Input

Dòng đầu ghi số N là độ dài dãy ký tự (1 ≤ N ≤ 2*105).

Dòng thứ 2 là dãy N ký tự cộng trừ.

Dòng thứ 3 là số quy vấn Q (1 ≤ Q ≤ 105)

Tiếp theo là Q dòng, mỗi dòng ghi cặp số a và b (1 ≤ a,b ≤ 109).  

Output

Gồm Q dòng, mỗi dòng ghi YES hoặc NO tùy thuộc kết quả kiểm tra với từng cặp a,b trong input.

Ví dụ

Input

Output

8

+-+---+-

5

2 1

10 3

7 9

10 10

5 3

YES

NO

NO

NO

YES
*/

bool solve(int x, int y, int plus, int minus) {
    int a, b, c, d;
    for(b=0; b<=(plus*x-y*minus)/2; b++) {
        d=plus*x-y*minus-b;
        if(x*(plus-b)+y*b-x*(minus-d)-y*d == 0 && d>=0) {
            a=plus-b; c=minus-d;
            if(a>=0 && b>=0 && c>=0 && d>=0) return true;
        }
    }
    return false;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, q; cin >> n;
int plus = 0, minus = 0;
string s; cin >>s;
for (int i = 0; i < n; ++i) {
    if (s[i] == '+') ++plus;
    else ++minus;
}
cin >> q;

while (q--) {
    int a, b; cin >> a >> b;
    if (solve(a, b, plus, minus)) cout << "YES\n";
    else cout << "NO\n";
}
return 0;
}