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
  vector<int> minDifference(int n, int k) {
    if (n == 1)
      return vector<int>(k, 1);
    if (k == 1)
      return {n};
    if (k > n)
      return {};
    vector<int> rs(k, 1);
    while (calcProduct(rs) < n) {
      sort(rs.begin(), rs.end());
      rs[0]++;
      if (calcProduct(rs) > n) {
        rs[0]--;
        break;
      }
    }
    return rs;
  }

private:
  int calcProduct(vector<int> rs) {
    int pro = 1;
    for (auto it : rs) {
      pro *= it;
    }
    return pro;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> rs = a.minDifference(8, 3);
  for (auto it : rs)
    cout << it << " ";
  return 0;
}
