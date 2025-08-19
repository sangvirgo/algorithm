#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class MinStack {
public:
  stack<int> st;
  stack<int> minSt;
  MinStack() {}

  void push(int val) {
    st.push(val);
    if (minSt.empty() || minSt.top() > val) {
      minSt.push(val);
    }
  }

  void pop() {
    if (minSt.top() == st.top())
      minSt.pop();
    st.pop();
  }

  int top() { return st.top(); }

  int getMin() { return minSt.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
