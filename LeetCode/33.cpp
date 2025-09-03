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
  int search(vector<int> &nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      int m = l + (r - l) / 2;
      if (nums[m] == target)
        return m;
      if (nums[m] > nums[r]) {
        if (nums[m] > target && nums[l] <= target) {
          r = m - 1;
        } else {
          l = m + 1;
        }
      } else {
        if (nums[m] < target && nums[r] >= target) {
          l = m + 1;
        } else {
          r = m - 1;
        }
      }
    }
    return -1;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {4, 5, 6, 7, 0, 1, 2};
  cout << a.search(temp, 0);

  return 0;
}
