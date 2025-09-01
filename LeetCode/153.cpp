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
  int findMin(vector<int> &nums) {
    if (nums.size() < 2)
      return nums[0];
    int rs = 5001;
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      int m = l + (r - l) / 2;
      rs = min(min(nums[r], nums[l]), min(rs, nums[m]));
      if (nums[m] > nums[l]) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  vector<int> temp = {3, 4, 5, 1, 2};
  Solution a;
  cout << a.findMin(temp);

  return 0;
}
