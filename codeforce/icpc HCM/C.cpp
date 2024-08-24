#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI: KHOẢNG CÁCH
Viết chương trình nhập vào tọa độ hai điểm A, B và một số K, kiểm tra xem khoảng
cách giữa A và B có bằng K hay không.
Input
Một dòng chứa lần lượt 5 số nguyên 𝑥𝐴, 𝑦𝐴, 𝑥𝐵, 𝑦𝐵 , K.
( -109 ≤ 𝑥𝐴, 𝑦𝐴, 𝑥𝐵, 𝑦𝐵 ≤ 109
; 0 ≤ K ≤ 109
)
Output
Xuất ra “YES” hoặc “NO” (viết in hoa).
Ví dụ:
Input: Output:
10 1 10 5 4 YES
Input: Output:
10 10 1 1 10 N
*/


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll a, b, c, d, k; cin >> a >> b >> c >> d >> k;
ll res = (a-c)*(a-c) + (b-d)*(b-d);

if(res==k*k) cout << "YES";
else cout << "NO";
return 0;
}