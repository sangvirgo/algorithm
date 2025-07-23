#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho trước số nguyên dương N. Hãy đếm xem có bao nhiêu cặp số dương (a, b) có giá trị không vượt quá N và thỏa mãn a % b >= số K cho trước.

Input:

Gồm hai số nguyên N và K (1 ≤ N ≤ 100000, 0 ≤ K ≤ N-1).

Output: 

In ra đáp án là số cặp (a, b) thỏa mãn.

Test ví dụ:

Input

Output

5 2

7

 

10 0

 

100

12321 98788

 

864

 

Giải thích test 1: Có 7 cặp thỏa mãn là (2,3), (2,4), (3,4), (2,5), (3,5), (4,5) và (5,3).
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, k; cin >>n>>k;

    long long result = 0;

    if (k == 0) {
        result = 1LL * n * n;
    } else {
        for (int b = k + 1; b <= n; ++b) {
            result += 1LL * (n / b) * (b - k);   
            if (n % b >= k) {
                result += (n % b) - k + 1;
            }       
        }
    }

    cout << result << endl;

return 0;
}