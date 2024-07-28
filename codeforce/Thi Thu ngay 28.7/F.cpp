#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
Cho dãy số A[] có N phần tử là một hoán vị của 1, 2, 3, …, N. Bạn được phép thực hiện phép biến đổi sau: mỗi bước, chọn một đoạn K phần tử liên tiếp, sau đó gán giá trị của cả đoạn này bằng giá trị phần tử nhỏ nhất trong đoạn.

Các bạn hãy tính xem cần sử dụng ít nhất bao nhiêu phép biến đổi để có thể thu được một dãy số mới có tất cả các phần tử đều bằng nhau?

Input:

Dòng đầu tiên là số nguyên dương N và K (2 ≤ K ≤ N ≤ 100000).

Dòng tiếp theo là N số nguyên mô tả dãy số hoán vị A[].

Output: 

In ra một số nguyên là số bước đổi ít nhất cần thực hiện.
*/


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, k; cin >> n >> k;
vector<int> arr(n);

for(int i=0; i<n; i++) {
    cin >> arr[i];
}

if(n==k) {
    cout << 1;
} else {
    int cnt=0;
    while(n>0) {
        cnt++;
        n-=(k-1);
    }
    cout << cnt;
}
return 0;
}