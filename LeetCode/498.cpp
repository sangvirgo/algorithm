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
  vector<int> findDiagonalOrder(vector<vector<int>> &mat) {
    vector<int> rs;
    int m = mat.size();
    int n = mat[0].size();
    map<int, vector<int>> ma;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        ma[i + j].push_back(mat[i][j]);
      }
    }

    for (auto it : ma) {
      vector<int> temp = it.second;
      if (it.first % 2 == 0)
        reverse(temp.begin(), temp.end());
      rs.insert(rs.end(), temp.begin(), temp.end());
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> rs = a.findDiagonalOrder(mat);
  for (auto it : rs)
    cout << it << endl;
  return 0;
}
