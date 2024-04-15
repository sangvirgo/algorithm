#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/find-the-difference/
*/


class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length()==0) return  t[0];
        for(int i=0; i<s.length(); i++) {
            t.erase(t.find(s[i]), 1);
        }
        return t[0];
    }
};


int main() {
    Solution obj;
    string s = "abcd";
    string t = "abcde";
    char result = obj.findTheDifference(s, t);
    cout << "The extra character is: " << result << endl;
return 0;
}