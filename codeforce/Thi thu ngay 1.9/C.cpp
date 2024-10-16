#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1e6+3
const int MOD = 1e9 + 7;
/*
BÀI 7C - KHÔNG CHIA HẾT

Cho dãy số A[] có N phần tử. Hãy tìm số chỉ số i (1 ≤ i ≤ N) thỏa mãn tính chất:

Với mọi chỉ số j (j khác i) thì A[i] không chia hết cho A[j].

Input:

Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 200000).

Dòng thứ hai gồm N số nguyên A[i] (1 ≤ A[i] ≤ 106).

Output:

In ra số lượng chỉ số thỏa mãn tính chất của đề bài

Test ví dụ:

Input

Ouput

5

32 11 8 5 24

3

4

4 4 4 4

0

10

1 2 3 4 5 6 7 8 9 10

1

 

Giải thích test 1: Các chỉ số i = 2, 3, 4 thỏa mãn.
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, res=0; cin >> n;
vector<ll> a(n);
vector<ll> cnt(MAX, 0);
vector<bool> check(MAX, false);
for(int i=0; i<n; i++) {
    cin >> a[i];
    cnt[a[i]]++;
}

sort(a.begin(), a.end());
for(int i=0; i<n; i++) {
    if(cnt[a[i]]==1) res++;
    if(check[a[i]]) continue;
    check[a[i]] = true;
    for(int j=a[i]; j<MAX; j+=a[i]) {
        cnt[j]++;
    }
}

cout << res;
return 0;
}