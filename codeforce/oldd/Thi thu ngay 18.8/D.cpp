#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 5D - CHÊNH LỆCH DÃY SỐ

Cho dãy số A[] có N phần tử. Nhiệm vụ của bạn là hãy chọn ra một dãy con B[] của A[] có K phần tử, sao cho độ chênh lệch của dãy số B[] là nhỏ nhất có thể.

Gọi Bmax là phần tử lớn nhất của dãy, Bmin là phần tử nhỏ nhất của dãy số. Độ chênh lệch của dãy số được định nghĩa bằng Bmax – Bmin.

Input:

Dòng đầu tiên gồm hai số nguyên dương N và K (2 ≤ K < N ≤ 100000).

Dòng thứ hai gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109).

Output: 

In ra một số nguyên là độ chênh lệch của dãy con nhỏ nhất tìm được.

Test ví dụ:

Input

Output

5 3

10 15 11 14 12

2

5 3

5 6 5 6 6

0

 

Giải thích test 1: Chọn dãy con {10, 11, 12}, độ chênh lệch của dãy bằng 12 – 10 = 2.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, k, res=INT_MAX; cin  >>n >> k;
vector<int> arr(n);
for(int i=0; i<n; i++) cin >> arr[i];

sort(arr.begin(), arr.end());

for(int i=0; i<n-(k-1); i++) {
    int temp=arr[i+(k-1)]-arr[i];
    res=min(temp, res);
}
cout << res;
return 0;
}