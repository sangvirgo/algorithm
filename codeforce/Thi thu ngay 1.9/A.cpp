#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho dãy số gồm A và B gồm có N phần tử. Hãy tìm dãy con dài nhất của dãy A (các phần tử không nhất thiết phải liên tiếp nhau) sao cho tổng các phần tử của dãy con này lớn hơn hoặc bằng tổng các phần tử tương ứng trong dãy B.

Input

Dòng đầu tiên là số nguyên N (2 ≤ N ≤ 100 000)

Dòng thứ hai gồm N số nguyên của dãy A[].

Dòng thứ hai gồm N số nguyên của dãy B[] (0 ≤ A[i], B[i] ≤ 109).

Output

In ra một số nguyên là độ dài của dãy con lớn nhất thỏa mãn yêu cầu của đề bài.

Test ví dụ:

Input:

Output

3

100 100 5

2 2 1000

2

 

Giải thích test:

Dãy con được lựa chọn có chỉ số lần lượt là 1, 2.
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >>n;
vector<ll> a(n), b(n);
for(int i=0; i<n; i++) cin >> a[i];
for(int i=0; i<n; i++) cin >> b[i];

vector<pair<ll, int>> p(n);
for(int i=0; i<n; i++) {
    p[i] = make_pair(a[i]-b[i], i);
}

sort(p.begin(), p.end(), greater<pair<ll, int>>());

ll sumA=0, sumB=0;
int res=0;
for(int i=0; i<n; i++) {
    int idx=p[i].second;
    sumA += a[idx];
    sumB += b[idx];
    if(sumA>=sumB) {
        res++;
    } else {
        break;
    }
}
cout << res;
return 0;
}