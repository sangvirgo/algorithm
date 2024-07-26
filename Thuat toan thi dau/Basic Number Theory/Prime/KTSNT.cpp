#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
using u64=uint64_t;
using u128=__uint128_t;

// u64 là kiểu dữ liệu uint64_t, đại diện cho số nguyên không dấu 64 bit.
// u128 là kiểu dữ liệu __uint128_t, đại diện cho số nguyên không dấu 128 bit.
/*
https://www.spoj.com/problems/PON/
*/


 
// 𝑎^𝑛 mod 𝑘
u64 binaryPower(u64 a, u64 n, u64 k) {
    u64 result=1;
    a%=k;
    while(n) {
        if(n&1) { // neu n la so le
            result=(u128)result*a%k;
        }
        a=(u128)a*a%k;
        n/=2;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binaryPower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}

// Hàm Miller-Rabin kiểm tra tính nguyên tố
bool MillerRabin(u64 n, int iter = 5) { // returns true if n is probably prime, else returns false.
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {  // neu la so chan
        d/=2;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    u64 x; cin >> x;
    if(MillerRabin(x)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
return 0;
}