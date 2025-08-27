#include <bits/stdc++.h>
#include <ctime>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  int carFleet(int target, vector<int> &position, vector<int> &speed) {
    if (position.size() <= 1)
      return position.size();
    int n = position.size();
    vector<int> indices(n);
    vector<double> times(n);
    for (int i = 0; i < n; i++) {
      times[i] = (double)((12 - position[i]) / speed[i]);
      indices[i] = i;
    }
    sort(indices.begin(), indices.end(),
         [&](int a, int b) { return position[a] > position[b]; });
    int rs = 1;
    double preS = times[indices[0]];
    for (int i = 0; i < n; i++) {
      if (times[indices[i]] > preS) {
        rs++;
        preS = times[indices[i]];
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
  vector<int> po = {10, 8, 0, 5, 3};
  vector<int> sp = {2, 4, 1, 1, 3};
  cout << a.carFleet(12, po, sp);

  return 0;
}
