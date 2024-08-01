#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
long long accCountDiv(long long n) {
    long long ret = 0;
    for (int i = 1; 1ll * i * i <= n; i ++)
        ret += n / i;
    for (int i = 1; i < n / (int)sqrt(n); i ++)
        ret += 1ll * (n / i - n / (i + 1)) * i;
    return ret;
}

void solution() {
    long long n;
    cin >> n;
    cout << accCountDiv(n);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

solution();
return 0;
}