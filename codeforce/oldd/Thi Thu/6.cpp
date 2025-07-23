#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<vector<int>> preferences(n, vector<int>(5));
    unordered_map<int, int> food_count;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            int x;
            cin >> x;
            preferences[i][j] = x;
            food_count[x]++;
        }
    }

    int res = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            bool found = false;
            for (int k = 0; k < 5; ++k) {
                if (food_count[preferences[i][k]] > 1 && food_count[preferences[j][k]] > 1) {
                    found = true;
                    break;
                }
            }
            if (!found) res++;
        }
    }

    cout << res << endl;

    return 0;
}
