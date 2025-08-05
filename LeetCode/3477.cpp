#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
  int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets) {
    int rs = 0;
    for (int i = 0; i < fruits.size(); i++) {
      int ok = 1;
      for (int j = 0; j < baskets.size(); j++) {
        if (baskets[j] && baskets[j] >= fruits[i]) {
          baskets[j] = 0;
          ok = 0;
          break;
        }
      }
      if (ok) {
        rs++;
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
  vector<int> f = {4, 2, 5};
  vector<int> b = {3, 5, 4};
  cout << a.numOfUnplacedFruits(f, b);
  return 0;
}
