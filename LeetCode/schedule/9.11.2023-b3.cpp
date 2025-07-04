// timf cac ki tu dung lien nhau ma co diem chung
#include <bits/stdc++.h>
#pragma GCC optimize("03, unroll-loops")
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
                while (strs[i].find(prefix)!=0)
                {
                prefix=prefix.substr(0, prefix.size()-1);
                    if (prefix.empty()) {
                        return "";
                    }
                }
                
        }
        return prefix;
    }
};

int main() {
    vector<string> strs = {"cir","car"};
    Solution solution;
    string commonPrefix = solution.longestCommonPrefix(strs);
    cout << "Longest common prefix: " << commonPrefix << endl;
    return 0;
} 