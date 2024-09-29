#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    cin >> k;
    vector<vector<int>> a(k, vector<int>(k));

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    sort(a[0].begin(), a[0].end());

    vector<int> result = a[0];

    for (int i = 1; i < k; i++) {
        priority_queue<int> pq;

        for (int x : result) {
            for (int y : a[i]) {
                pq.push(x + y);

                if ((int)pq.size() > k) {
                    pq.pop();
                }
            }
        }

        result.clear();
        while (!pq.empty()) {
            result.push_back(pq.top());
            pq.pop();
        }

        sort(result.begin(), result.end());
    }

    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
