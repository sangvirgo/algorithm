#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> st; // Stack to store weights
    unordered_map<char, int> weight = {{'C', 12}, {'H', 1}, {'O', 16}};

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(-1); // Use -1 as a marker for '('
        } else if (s[i] == ')') {
            int temp = 0;
            while (st.top() != -1) {
                temp += st.top();
                st.pop();
            }
            st.pop(); // Remove the '(' marker
            st.push(temp);
        } else if (isdigit(s[i])) {
            int num = s[i] - '0';
            int temp = st.top() * num;
            st.pop();
            st.push(temp);
        } else {
            st.push(weight[s[i]]);
        }
    }

    int result = 0;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << result << endl;
    return 0;
}
