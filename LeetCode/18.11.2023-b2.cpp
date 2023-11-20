// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return -1;
        }

        int sizeOfNeedle = needle.size();
        for (int i = 0; i <= haystack.size(); i++) {
            if (needle == haystack.substr(i, sizeOfNeedle)) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    string s1="sadbutsad", s2="sad", s3="leetcode", s4 = "leeto";
    Solution solution;

    int a=solution.strStr(s1, s2);
    int b=solution.strStr(s3, s4);
    cout << a << endl ;
    cout << b << endl;
    return 0;
}