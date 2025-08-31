#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <memory>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  int minEatingSpeed(vector<int> &piles, int h) {
    int r = *max_element(piles.begin(), piles.end());
    int l = 1;
    while (l < r) {
      int temp = 0;
      int m = l + (r - l) / 2;
      for (auto it : piles) {
        temp += ceil((double)it / m);
      }
      cout << "------------------- m: " << m << endl;
      cout << "------------------- r: " << r << endl;
      cout << "------------------- l: " << l << endl;
      cout << "------------------- temp: " << temp << endl;
      cout << "-------------------" << endl;
      if (temp > h) {
        l = m + 1;
      } else {
        r = m;
      }
    }
    return l;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {3, 6, 7, 11};
  cout << a.minEatingSpeed(temp, 8);

  return 0;
}
