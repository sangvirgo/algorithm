#include <bits/stdc++.h>
#include <cctype>
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
  int evalRPN(vector<string> &tokens) {
    stack<long> st;
    for (auto c : tokens) {
      if (c != "+" && c != "-" && c != "*" && c != "/") {
        st.push(stoi(c));
      } else if (st.size() >= 2) {
        int b = st.top();
        st.pop();
        int a = st.top();
        st.pop();
        if (c == "+")
          st.push(a + b);
        if (c == "-")
          st.push(a - b);
        if (c == "*")
          st.push(a * b);
        if (c == "/")
          st.push(a / b);
      }
    }
    return int(st.top());
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<string> tmp = {"10", "6", "9",  "3", "+", "-11", "*",
                        "/",  "*", "17", "+", "5", "+"};
  cout << a.evalRPN(tmp);

  return 0;
}
