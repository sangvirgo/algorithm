#include <algorithm>
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
  int longestConsecutive(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int res = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      int temp = 0;
      while (i < nums.size() && nums[i] == nums[i + 1] - 1) {
        temp++;
        i++;
      }
      res = max(res, temp);
    }
    return res;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
