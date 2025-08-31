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
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.size() == 1 && matrix[0].size() == 1) {
      if (target == matrix[0][0])
        return 1;
      else if (target != matrix[0][0])
        return 0;
    }
    int rowFind = 0;
    for (int i = 0; i < matrix.size() - 1; i++) {
      if (matrix[i][0] == target || matrix[i + 1][0] == target)
        return 1;
      if (matrix[i][0] <= target && matrix[i + 1][0] > target) {
        rowFind = i;
      }
    }
    if (matrix[matrix.size() - 1][0] < target)
      rowFind = matrix.size() - 1;
    bool rs = 0;
    int l = 0, r = matrix[0].size() - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (matrix[rowFind][mid] == target) {
        return 1;
      } else if (matrix[rowFind][mid] < target) {
        l = mid + 1;
      } else if (matrix[rowFind][mid] > target) {
        r = mid - 1;
      }
    }
    return 0;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
