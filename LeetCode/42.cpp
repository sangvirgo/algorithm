#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  int trap(vector<int> &height) {
    vector<int> maxLeft;
    vector<int> maxRight;
    maxLeft.push_back(height[0]);
    maxRight.push_back(height[height.size() - 1]);
    for (int i = 1; i < height.size(); i++) {
      maxLeft.push_back(max(maxLeft[i - 1], height[i]));
    }
    int k = 0;
    for (int i = height.size() - 2; i >= 0; i--) {
      maxRight.push_back(max(maxRight[k], height[i]));
      k++;
    }
    reverse(maxRight.begin(), maxRight.end());
    int res = 0;
    for (int i = 0; i < height.size(); i++) {
      res += min(maxLeft[i], maxRight[i]) - height[i];
    }
    return res;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> t = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  vector<int> temp = {4, 2, 0, 3, 2, 5};
  cout << a.trap(t);

  return 0;
}
