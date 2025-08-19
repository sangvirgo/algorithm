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
  int maxProfit(vector<int> &prices) {
    int maxProfitValue = 0;
    int minPrice = 10004;
    for (auto price : prices) {
      minPrice = min(minPrice, price);
      int currentProfit = price - minPrice;
      maxProfitValue = max(maxProfitValue, currentProfit);
    }
    return maxProfitValue;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solution a;
  vector<int> rs = {3, 2, 6, 5, 0, 3};
  cout << a.maxProfit(rs);
  return 0;
}
