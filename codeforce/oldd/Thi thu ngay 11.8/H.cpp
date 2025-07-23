#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 4H - TÌM KIẾM NHỊ PHÂN NHƯNG QUÊN SẮP XẾP

Dãy số X[] có N phần tử là các số nguyên dương được tạo ra theo quy tắc sau:

Cho trước các hằng số X[0], a, c, m
X[i] = (a*X[i-1] + c) % m
Đảm bảo N phần tử là phân biệt, không có 2 giá trị nào trùng nhau.
 Ai cũng đã biết đến thuật toán tìm kiếm nhị phân trên dãy đã sắp xếp.

Bài toán của bạn hôm nay là hãy đếm xem có bao nhiêu giá trị của dãy số X[] có thể được tìm thấy theo quy tắc tìm kiếm nhị phân khi chưa sắp xếp dãy X[].

Ví dụ: với N = 5, m = 8, a = 1, c = 3 và X[0] = 3

Dãy số tạo ra sẽ là X[] = {6, 1, 4, 7, 2}

Các số có thể tìm được theo quy tắc tìm kiếm nhị phân trên dãy X[] trên là số 4 và số 7. Kết quả bài toán là 2.

Input

Chỉ có một dòng ghi 5 số N, m, a, c và X[0]

0 < N ≤ 106 ;
0 < m, a, c  < 231.
0 ≤ m, a, c  < 231.
Các giá trị của input sẽ đảm bảo các giá trị của dãy X[] là phân biệt

Output
Ghi ra kết quả của bài toán.

Ví dụ

Input

Output

5 8 1 3 3

2

6 10 1234567891 1 1234567890

6

 

Giới hạn thời gian: 1s

Giới hạn bộ nhớ: 524288 Kb
*/
bool check(vector<ll> &a, ll target, int n) {
    int l=0, r=n-1;
    while(l<=r) {
        int mid=(l+r)/2;
        if(a[mid]==target) return true;
        else if(a[mid]>target) r=mid-1;
        else l=mid+1;
    }
    return false;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >>n;
vector<ll> X(n+1);
ll m, a, c, x0; cin >>m>>a>>c>>x0;

X[0] = (x0*a + c) % m;
for(int i=1; i<n; i++) {
    X[i] = ((a*X[i-1] + c) % m);            
}

int cnt=0;
for(int i=0; i<n; i++) {
    if(check(X, X[i], n)) cnt++;
}

cout << cnt;
return 0;   
}