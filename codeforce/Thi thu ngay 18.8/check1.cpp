#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> D(n);
    for(int i = 0; i < n; i++) {
        cin >> D[i];
    }

    double result = 0.0;

    if (k == 1) {
        sort(D.begin(), D.end());
        int median = D[n / 2]; 
        for(int i = 0; i < n; i++) {
            result += abs(D[i] - median);
        }
    } else if (k == 2) {
        double mean = accumulate(D.begin(), D.end(), 0.0) / n; 
        for(int i = 0; i < n; i++) {
            result += pow(D[i] - mean, 2);
        }
    }

    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
