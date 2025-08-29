#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  int largestRectangleArea(vector<int> &heights) {
    stack<int> st;
    int maxRectangle = 0;
    for (int i = 0; i < heights.size(); i++) {
      while (!st.empty() && heights[st.top()] > heights[i]) {
        int hPop = heights[st.top()];
        st.pop();
        int width = 0;
        if (st.empty()) {
          width = i;
        } else {
          width = i - st.top() - 1;
        }
        maxRectangle = max(maxRectangle, hPop * width);
      }
      st.push(i);
    }
    while (!st.empty()) {
      int hPop = heights[st.top()];
      st.pop();
      int width = 0;
      if (st.empty()) {
        width = heights.size();
      } else {
        width = heights.size() - st.top() - 1;
      }
      maxRectangle = max(maxRectangle, hPop * width);
    }
    return maxRectangle;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<int> temp = {2, 1, 5, 6, 2, 3};
  cout << a.largestRectangleArea(temp);

  return 0;
}
