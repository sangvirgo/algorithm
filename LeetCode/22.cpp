#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  vector<string> generateParenthesis(int n) {
    vector<string> rs;
    string temp = "";
    generateBacktrackinggg(rs, n, 0, 0, temp);
    return rs;
  }

  void generateBacktrackinggg(vector<string> &r, int n, int numClose,
                              int numOpen, string &temp) {
    if (numOpen == n && numClose == n) {
      r.push_back(temp);
    }

    if (numClose < numOpen) {
      temp += ')';
      generateBacktrackinggg(r, n, numClose + 1, numOpen, temp);
      temp = temp.substr(0, temp.size() - 1);
    }
    if (numOpen < n) {
      temp += '(';
      generateBacktrackinggg(r, n, numClose, numOpen + 1, temp);
      temp = temp.substr(0, temp.size() - 1);
    }
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<string> rs = a.generateParenthesis(3);
  for (auto it : rs) {
    cout << it << endl;
  }
  return 0;
}
