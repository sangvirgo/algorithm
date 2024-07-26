#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
Tim so nguyen to
*/

// tim a^k mod n
// Kiểm tra điều kiện thuật toán với a cố định
long long binaryPower(long long a, long long k, long long n)
{
    a = a % n;
    long long res = 1;
    while (k)
    {
        if (k & 1)
            res = (res * a) % n;
        a = (a * a) % n;
        k /= 2;
    }
    return res;
}

bool test(long long a, long long n, long long k, long long m)
{
    long long mod = binaryPower(a, m, n);
    if (mod == 1 || mod == n - 1)
            return true;
    for (int l = 1; l < k; ++l)
    {
        mod = (mod * mod) % n;
        if (mod == n - 1)
            return true;
    }
    return false;
}

bool MillerRabin(long long n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n < 11)
        return false;

    long long k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        m /= 2;
        k++;
    }

    static vector<int> checkSet = {2,3,5,7,11,13,17,19,23,29,31,37};
    for (auto a : checkSet)
        if (!test(a, n, k, m))
            return false;
    return true;
}




int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cout << MillerRabin(24545454452445);
return 0;
}