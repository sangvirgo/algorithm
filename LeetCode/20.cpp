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
  bool isValid(string s) {
    stack<char> s1;
    for (auto it : s) {
      if (it == '(' || it == '[' || it == '{')
        s1.push(it);
      else if (it == ')' || it == ']' || it == '}') {
        if (s1.empty())
          return 0;
        if ((it == ')' && s1.top() == '(') || (it == '}' && s1.top() == '{') ||
            (it == ']' && s1.top() == '[')) {
          s1.pop();
        } else {
          return 0;
        }
      }
    }
    return s1.empty() ? 1 : 0;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  cout << a.isValid("()[]{}");
  return 0;
}
