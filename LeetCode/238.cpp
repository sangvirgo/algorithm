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
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> rs;
    int cntZero = 0;
    int prefixProduct = 1;
    for (auto it : nums) {
      if (it == 0)
        cntZero++;
      if (it)
        prefixProduct = prefixProduct * it;
    }
    if (cntZero > 0) {
      if (cntZero == 1) {
        for (auto it : nums) {
          if (it) {
            rs.push_back(0);
          } else {
            rs.push_back(prefixProduct);
          }
        }
      } else {
        for (auto it : nums)
          rs.push_back(0);
      }
    } else {
      for (auto it : nums) {
        rs.push_back(prefixProduct / it);
      }
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {1, 2, 3, 4};
  vector<int> rs = a.productExceptSelf(temp);
  for (auto it : rs)
    cout << it << endl;

  return 0;
}
