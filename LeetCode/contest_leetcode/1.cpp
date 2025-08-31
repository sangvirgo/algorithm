#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 * Q1. Restore Finishing Order
©leetcode
 */

class Solution {
public:
  vector<int> recoverOrder(vector<int> &order, vector<int> &friends) {
    vector<int> rs;
    for (auto it : order) {
      int l = 0, r = friends.size() - 1;
      while (l <= r) {
        int m = l + (r - l) / 2;
        if (it == friends[m]) {
          rs.push_back(it);
          break;
        } else if (friends[m] < it) {
          l = m + 1;
        } else {
          r = m - 1;
        }
      }
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  vector<int> order = {3, 1, 2, 5, 4};
  vector<int> f = {1, 3, 4};
  Solution a;
  vector<int> rs = a.recoverOrder(order, f);
  for (auto it : rs) {
    cout << it << " ";
  }

  return 0;
}
