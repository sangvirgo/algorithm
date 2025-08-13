#include <algorithm>
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> rs;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 3; i++) {
      int x = nums[i];
      vector<int> temp;
      temp.push_back(x);
      for (int j = i + 1; j < nums.size() - 2; j++) {
        int rs = binarySearch(nums, j, nums.size() - 1, 0 - x - nums[j]);
        if (rs != -1) {
          temp.push_back(nums[j]);
          temp.push_back(nums[rs]);
          rs.push_back(temp);
        }
      }
    }
    return rs;
  }

private:
  int binarySearch(vector<int> &nums, int r, int l, int target) {
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] > target) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return -1;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
