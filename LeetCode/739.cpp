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
  vector<int> dailyTemperatures(vector<int> &temperatures) {
    stack<int> st;
    vector<int> rs(temperatures.size(), 0);
    for (int i = 0; i < temperatures.size(); i++) {
      while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
        int preDay = st.top();
        st.pop();
        rs[preDay] = i - preDay;
      }
      st.push(i);
    }
    return rs;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {73, 74, 75, 71, 69, 72, 76, 73};
  for (auto it : a.dailyTemperatures(temp)) {
    cout << it << endl;
  }
  return 0;
}
