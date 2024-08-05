#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho dãy số A[] có N phần tử.

Hãy đếm số cặp chỉ số (L, R) thỏa mãn tổng dãy con liên tiếp (A[L] + A[L+1] + … + A[R]) chia hết cho số nguyên M.

Input:

Dòng đầu tiên gồm 2 số nguyên dương N và M (1 ≤ N ≤ 105, 1 ≤ M, A[i] ≤ 109).

Dòng tiếp theo gồm N số nguyên mô tả dãy số A[].

Output: 

In ra số cặp chỉ số thỏa mãn yêu cầu của đề bài.

Test ví dụ:

Input

Output

3 2

4 1 5

3

8 5

13 17 7 5 8 9 51 7

6

 

Giải thích test 1: có 3 dãy con liên tiếp thỏa mãn {4}, {1, 5}, {4, 1, 5}
*/



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, m; cin >> n >>m;
vector<int> arr(n);
int cnt=0; map<ll, int> g;
vector<int> reminders(n+1, 0);
for(int i=0; i<n; i++) cin  >> arr[i];


for(int i=1; i<=n; i++) {
    reminders[i]=(reminders[i-1]+arr[i-1]%m)%m;
    cnt+=g[reminders[i]];
    g[reminders[i]]++;
}

cout<< cnt;
return 0;
}



// for(int i=1; i<=n; i++) {
//     cout << reminders[i] << " ";
// }
// cout << endl;
// for(int i=0; i<n; i++) {
//     cout << arr[i] << " ";
// }