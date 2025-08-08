#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

 */
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> rs;
    vector<string> duplicateStr = strs;
    for (int i = 0; i < strs.size(); i++) {
      sort(strs[i].begin(), strs[i].end());
    }
    unordered_map<string, vector<int>> m;
    for (int i = 0; i < strs.size(); i++) {
      m[strs[i]].push_back(i);
    }
    for (const auto &it : m) {
      vector<string> temp;
      for (auto s : it.second) {
        temp.push_back(duplicateStr[s]);
      }
      rs.push_back(temp);
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  Solution a;
  vector<string> temp = {"eat", "tea", "tan", "ate", "nat", "bat"};
  vector<vector<string>> rs = a.groupAnagrams(temp);
  for (auto it : rs) {
    for (auto c : it) {
      cout << c << " ";
    }
    cout << endl;
  }
  return 0;
}
