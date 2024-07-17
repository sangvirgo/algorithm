#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int cnt = 0;
        int l = 0, r = k - 1;
        
        while (l < r) {
            if (a[l] == 1) {
                l++;
                a[r]++;
            } else if(a[l]!=1) {
                a[l]--;
                r++;
                a.insert(a.begin() +1, 1);
                l--;
            }
            cnt++;
        }
        
        cout << cnt << endl;
    }
    return 0;
}
