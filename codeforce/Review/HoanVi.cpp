#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 1G: HOÁN VỊ

Cho số nguyên N và dãy số P[1], P[2], …, P[N] là một hoán vị của 1, 2, …, N.

Với mỗi i = 1, 2, …, N, gọi Mi là phần dư của i khi chia cho Pi, tức Mi = i%Pi.

Nhiệm vụ của bạn là hãy tính giá trị lớn nhất có thể của tổng M1 + M2 + … + MN.

Input:

Một số nguyên dương N duy nhất (1 ≤ N ≤ 109).

Output: 

In ra giá trị tổng lớn nhất của M1 + M2 + … + MN.

Test ví dụ:

Input

Output

2

1

 

13

 

78

1

0

 

 

Giải thích test 1: Lựa chọn hoán vị P = {2, 1}, ta có được M1 + M2 = 1.
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll n; cin >> n;
cout << n*(n-1)/2;

return 0;
}