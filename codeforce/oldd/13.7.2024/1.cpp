#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/PTIT121A/

2
0 5 4 1
2 4 6 2
*/
struct HCN {
    int x1, y1;
    int x2, y2;
};

bool KT(HCN H, int a, int b, int c, int d) {
    return (H.x1 <= a && a <= H.x2 && H.x1 <= c && c <= H.x2 &&
            H.y2 <= b && b <= H.y1 && H.y2 <= d && d <= H.y1);
}

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int n;
    cin >> n;
    vector<int> X;
    vector<int> Y;
    vector<HCN> H(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> H[i].x1 >> H[i].y1 >> H[i].x2 >> H[i].y2;
        X.push_back(H[i].x1);
        Y.push_back(H[i].y1);
        X.push_back(H[i].x2);
        Y.push_back(H[i].y2);
    }

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    X.erase(unique(X.begin(), X.end()), X.end());
    Y.erase(unique(Y.begin(), Y.end()), Y.end());

    long long S = 0;
    for (size_t i = 0; i < X.size() - 1; ++i) {
        for (size_t j = 0; j < Y.size() - 1; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (KT(H[k], X[i], Y[j + 1], X[i + 1], Y[j])) {
                    S += static_cast<long long>(X[i + 1] - X[i]) * (Y[j + 1] - Y[j]);
                    break;
                }
            }
        }
    }

    cout << S << endl;

    return 0;
}