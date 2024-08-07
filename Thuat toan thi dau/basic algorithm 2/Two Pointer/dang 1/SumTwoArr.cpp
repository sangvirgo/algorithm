#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho hai dãy số nguyên đã được sắp xếp không giảm  và  lần lượt có  và  phần tử. Hãy ghép chúng thành dãy  được bố trí theo thứ tự không giảm.

Giới hạn:  và .

Phân tích
Hãy cùng xem ví dụ sau đây.

Cho trước hai dãy số  và  được sắp xếp không giảm:

5 6
1 3 6 8 10
2 6 7 12 14 15
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, m; cin >> n >> m;
vector<int> arrA(n), arrB(m), arrC(m+n);

for(int i=0; i<n; i++) cin >> arrA[i];
for(int i=0; i<m; i++) cin >> arrB[i];

int i=0, j=0, t=0;
while(i<n || j<m) {
    if(j==m||(arrA[i]<arrB[j] && i<n)) arrC[t++]=arrA[i++];
    else arrC[t++]=arrB[j++];
}


for(int k=0; k<m+n; k++) cout <<  arrC[k] << " ";
return 0;
}