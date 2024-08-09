#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
const int MOD = 1e9 + 7;

vector<ll> f(MAX);

void createF(ll a, ll b) {
    ll remainder = a % b;
    for (int i = 1; i < MAX; i++) {
        remainder *= 10;
        f[i] = remainder / b;
        remainder %= b;
        if (remainder == 0) {
            break; // Dừng lại nếu phần thập phân kết thúc
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    createF(a, b);

    // Khởi tạo Rùa và Thỏ
    int tortoise = 1, hare = 1;
    while (true) {
        tortoise = f[tortoise];  
        hare = f[f[hare]];       
        if (tortoise == hare || hare >= MAX || f[hare] == 0) break;
    }

    // Tìm vị trí bắt đầu chu kỳ (mu)
    int mu = 0, p = 1;
    tortoise = 1;  
    while (p != tortoise && tortoise < MAX) {
        p = f[p];
        tortoise = f[tortoise];
        mu++;
    }

    // Tìm độ dài của chu kỳ (lambda)
    int lambda = 1;
    p = f[p];
    while (p != tortoise && tortoise < MAX) {
        tortoise = f[tortoise];
        lambda++;
    }

    // In ra kết quả
    cout << a / b << ".";

    // In phần thập phân trước chu kỳ
    for (int i = 1; i <= mu; i++) {
        cout << f[i];
    }

    cout << "(";

    if (lambda == 0 || tortoise >= MAX) {
        cout << "0";
    } else {
        for (int i = mu + 1; i <= lambda + mu && i < MAX; i++) {
            cout << f[i];
        }
    }

    cout << ")" << endl;

    // Kiểm tra nếu cần
    cout << endl << lambda << " " << mu;
    return 0;
}
