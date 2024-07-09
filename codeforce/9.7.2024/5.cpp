#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        long long product = 1;
        bool hasZero = false;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            product *= arr[i];
            if(arr[i] == 0) hasZero = true;
        }

        if(hasZero) {
            cout << "Maximum product can be obtained by replacing a zero with 1." << endl;
            continue; // Move to the next test case
        }

        if(product < 0) {
            cout << "Maximum product cannot be improved by incrementing any single element." << endl;
            continue; // Move to the next test case
        }

        long long maxProduct = 0;
        for(int i = 0; i < n; ++i) {
            long long tempProduct = (product / arr[i]) * (arr[i] + 1);
            maxProduct = max(maxProduct, tempProduct);
        }

        cout << maxProduct << endl;
    }
    return 0;
}