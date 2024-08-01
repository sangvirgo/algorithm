/*
Tính nCr trong O(N) với mod P nguyên tố.

Ta sử dụng công thức nCr = n! / r! / (n-r)!

Khởi tạo trước fac[i] = i! mod P
Khởi tạo trước ifac[i] = i!^-1 mod P (nghịch đảo modulo P của i!).

Từ đó dễ dàng tính được nCr trong O(1).
*/


// https://wiki.vnoi.info/translate/he/Number-Theory-5
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define N 2123456
#define LL long long

LL fac[N], ifac[N];

LL PowerMod(LL a, LL n){
    LL ret = 1;
    while (n){
        if (n & 1){
            ret *= a;
            ret %= MOD;
        }
        a *= a;
        a %= MOD;
        n /= 2;
    }
    return ret;
}

inline void precompute(){
    int i;
    fac[0] = 1;
    for (i = 1; i < N; i++){
        fac[i] = (i * fac[i - 1]) % MOD;
    }
    ifac[N - 1] = PowerMod(fac[N - 1], MOD - 2);
    for (i = N - 2; i >= 0; i--){
        ifac[i] = ((i + 1) * ifac[i + 1]) % MOD;
    }
}

LL com(int n, int r){
    LL ret = fac[n];
    ret *= ifac[r];
    ret %= MOD;
    ret *= ifac[n - r];
    ret %= MOD;
    return ret;
}

int main()
{
    clock_t start, end;
    start=clock();

    precompute();
    cout << com(4892,231) << endl;

    end=clock();
    double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
    return 0;
}