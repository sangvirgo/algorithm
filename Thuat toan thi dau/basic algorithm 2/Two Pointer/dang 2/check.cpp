#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int result = 0;

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int temp = arr[i] + arr[left] + arr[right];

            if (temp <= x) {
                result = max(result, temp);
                left++;
            } else {
                right--;
            }
        }
    }

    cout << result << "\n";
    return 0;
}
