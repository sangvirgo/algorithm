#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/const int MAXN = 1e6;

vector<int> primes;
vector<bool> isPrime;

void sieve() {
    isPrime.assign(MAXN + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (!isPrime[i]) continue;
        primes.push_back(i);
        for (int j = i + i; j <= MAXN; j += i) {
            isPrime[j] = 0;
        }
    }
}

long long binaryPower(long long a, long long k, long long n) {
    a = a % n;
    long long res = 1;
    while (k) {
        if (k & 1)
            res = (res * a) % n;
        a = (a * a) % n;
        k /= 2;
    }
    return res;
}

bool test(long long a, long long n, long long k, long long m) {
    long long mod = binaryPower(a, m, n);
    if (mod == 1 || mod == n - 1)
            return 1;
    for (int l = 1; l < k; ++l) {
        mod = (mod * mod) % n;
        if (mod == n - 1)
            return 1;
    }
    return 0;
}

bool isPrimeRabinMiller(long long n) {
    vector<int> checkSet = {2, 3, 5, 7,
                            11, 13, 17, 19,
                            23, 29, 31, 37};
    if (n <= 37) {
        for (int i : checkSet) {
            if (i == n) return 1;
        }
        return 0;
    }

    long long k = 0, m = n - 1;
    while (m % 2 == 0) {
        m /= 2;
        k++;
    }

    for (auto a : checkSet)
        if (!test(a, n, k, m))
            return 0;
    return 1;
}

bool isSquare(long long n){
    long long c = sqrt(n + 4);
    return c * c == n || (c - 1) * (c - 1) == n;
}

int countDiv(long long n) {
    if (n == 1) return 1;
    vector<int> powV;
    for (auto p : primes) {
        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            ++cnt;
        }
        if (cnt) powV.push_back(cnt);
    }
    if (n != 1) {
        if (isPrimeRabinMiller(n)) powV.push_back(1);
        else if (isSquare(n)) powV.push_back(2);
        else {
            powV.push_back(1);
            powV.push_back(1);
        }
    }
    int ret = 1;
    for (auto i : powV) ret *= (i + 1);
    return ret;
}

void solution() {
    sieve();
    long long n;
    cin >> n;
    cout << countDiv(n);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

solution();
return 0;
}