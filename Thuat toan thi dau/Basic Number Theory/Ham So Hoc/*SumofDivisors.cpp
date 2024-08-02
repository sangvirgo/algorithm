#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/sum-divisors-1-n/
#define ll long long
#define mod 1000000007

// Hàm tính lũy thừa x^y với mô đun p
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return (res + p) % p;
}

// Hàm tìm nghịch đảo mô đun của x
ll modinv(ll x)
{
    return power(x, mod - 2, mod);
}

// Hàm tính tổng từ 1 đến n
ll sum(ll n)
{
    ll retval = ((((n % mod) * ((n + 1) % mod)) % mod) * modinv(2)) % mod;
    return retval;
}

// Hàm tính tổng các ước của các số từ 1 đến n
ll divisorSum(ll n)
{
    ll l = 1;
    ll ans = 0;

    while (l <= n)
    {
        ll k = n / l;
        ll r = n / k;
        k %= mod;
        
        // Với i từ l đến r, floor(n/i) sẽ là k
        ans += ((sum(r) - sum(l - 1) % mod) * k) % mod;
        
        // Lấy mô đun để tránh giá trị lớn
        ans %= mod;
        l = r + 1;
    }
    ans = ans % mod;
    
    // Nếu kết quả âm, thêm mod để đảm bảo giá trị dương
    if (ans < 0){
        return ans + mod;
    } else {
        return ans;
    }
}

int main()
{
    ll n; 
    cin >> n;
    cout << divisorSum(n) << endl;

	cout << sum(5);
    return 0;
}
