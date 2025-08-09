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
  vector<int> topKFrequent(vector<int> &nums, int k) {
    map<int, int> m;
    for (auto it : nums) {
      m[it]++;
    }
    vector<pair<int, int>> sVetor;
    for (const auto &p : m) {
      sVetor.push_back(p);
    }
    sort(sVetor.begin(), sVetor.end(),
         [](const auto &a, const auto &b) { return a.second > b.second; });
    vector<int> rs;
    for (int i = 0; i < k; i++) {
      rs.push_back(sVetor[i].first);
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solution a;
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  vector<int> rs = a.topKFrequent(nums, 2);
  for (auto it : rs) {
    cout << it << endl;
  }
  return 0;
}
