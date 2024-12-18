#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 7F - TỔNG CHẴN LẺ

Cho dãy số A[] có N phần tử là nguyên dương không quá 100, N không quá 50.

Hãy đếm số cách chọn ra các phần tử trong dãy để được giá trị tổng là số chẵn (hoặc lẻ).

Input

Dòng đầu có số N và giá trị 0 nếu muốn tìm tổng chẵn, giá trị 1 nếu muốn tìm tổng lẻ.

Dòng tiếp theo ghi N số của dãy A[]

Output

Ghi ra số cách tìm được, nếu giá trị quá lớn thì hãy chia dư cho 109 + 7

Ví dụ

Input

Output

2 0

1 3

2

Giải thích ví dụ: có hai cách chọn:

Cách 1: không lấy phần tử nào
Cách 2: lấy cả 2 phần tử
*/
ll ncr[105][105];

void precompute() {
    for (int i = 0; i <= 100; i++) {
        ncr[i][0] = ncr[i][i] = 1; // C(n, 0) = C(n, n) = 1
        for (int j = 1; j < i; j++) {
            ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % MOD;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, data; cin >> n>> data;
vector<int> a(n);
int odd=0, even=0;
for(int i=0; i<n; i++) {
    cin >> a[i];
    if(a[i]&1) odd++;
    else even++; 
}
precompute();
ll res;

if(data) {  // le
    res=0;
    // only choose odd
    for(int i=1; i<=odd; i+=2) {
        res=(res+ncr[odd][i])%MOD;
    }

    
} else { // chan
    res=1;
    // chan cua le
    for(int i=2; i<=odd; i+=2) {
        res=(res+ncr[odd][i])%MOD;
    }

}

res=(res*(1ll<<even))%MOD;

cout << res;
return 0;
}