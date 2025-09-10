#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class TimeMap {
  map<string, vector<pair<int, string>>> m;

public:
  TimeMap() {}

  void set(string key, string value, int timestamp) {
    m[key].push_back({timestamp, value});
  }

  string get(string key, int timestamp) {
    if (m.find(key) == m.end())
      return "";
    vector<pair<int, string>> &temp = m[key];
    int l = 0, r = temp.size() - 1;
    string s = "";
    while (l <= r) {
      int m = l + (r - l) / 2;
      if (timestamp <= temp[m].first)
        s = temp[m].second;
      if (timestamp > temp[m].first)
        l = m + 1;
      else
        r = m - 1;
    }
    return s;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
