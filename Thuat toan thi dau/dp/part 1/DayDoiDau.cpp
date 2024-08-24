#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10e3
const int MOD = 1e9 + 7;
/*
Cho dãy số nguyên gồm  phần tử  và các số nguyên dương . Hãy tìm dãy con đổi dấu dài nhất của dãy đó.
Dãy con của dãy  là dãy thu được bằng cách xóa đi một số phần tử của .
Điều kiện:  và .

Dãy con đổi dấu  phải thoả mãn các điều kiện sau:

 hoặc 
Các chỉ số phải cách nhau ít nhất 
Chênh lệch giữa 2 phần tử liên tiếp không vượt quá   
Hướng dẫn:

Gọi  là số phần tử của dãy con đổi dấu có phần tử cuối cùng là  và phần tử cuối cùng lớn hơn phần tử đứng trước. Tương tự,  là số phần tử của dãy con đổi dấu có phần tử cuối cùng là  và phần tử cuối cùng nhỏ hơn phần tử đứng trước.

Ta dễ dàng suy ra:

, với mọi  thỏa mãn:  và .
, với mọi  thỏa mãn:  và .


5 5
1 3 11 20 30
12 34 112 123 126
112 119 135 157 158
123 200 288 297 301
132 210 289 342 346
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<vector<ll>> a(MAX, vector<ll>(MAX, 0)), f(MAX, vector<ll>(MAX, 0));

int n, m; cin >> n >> m;
for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
        cin >> a[i][j];
    }
}

for(int i=1; i<=n; i++) {
    for(int j=1; j<=m; j++) {
        f[i][j]=max(f[i-1][j], f[i][j-1])+a[i][j];
    }
}

cout << f[n][m];
return 0; 
}