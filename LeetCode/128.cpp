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
    auto index = unique(nums.begin(), nums.end());
    nums.erase(index, nums.end());
    int currentLenght = 1;
    int res = 1;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i] - 1)
        currentLenght++;
      else
        currentLenght = 1;
      res = max(res, currentLenght);
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
