#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c1, t1, c2, t2, cs, ts;
    cin >> c1 >> t1 >> c2 >> t2 >> cs >> ts;
    int a = -1, b = -1;
    bool found = false;

    for (int i = 0; i <= cs / c1; i++) {
        int temp1 = i * c1;
        int temp2 = i * t1;
        int remaining_cs = cs - temp1;
        int remaining_ts = ts - temp2;
        if (remaining_cs >= 0 && remaining_ts >= 0 && remaining_cs % c2 == 0 && remaining_ts % t2 == 0) {
            int j = remaining_cs / c2;
            if (j * t2 == remaining_ts) {
                if (found) {
                    cout << "?";
                    return 0;
                }
                a = i;
                b = j;
                found = true;
            }
        }
    }

    if (found) {
        cout << a << " " << b;
    } else {
        cout << "?";
    }
    return 0;
}
