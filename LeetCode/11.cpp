#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  int maxArea(vector<int> &height) {
    int l = 0, r = height.size() - 1;
    int maxAreaValue = 0;
    while (l < r) {
      int currentArea = min(height[l], height[r]) * (r - l);
      maxAreaValue = max(maxAreaValue, currentArea);
      if (height[r] >= height[l]) {
        l++;
      } else {
        r--;
      }
    }
    return maxAreaValue;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << a.maxArea(temp);
  return 0;
}
