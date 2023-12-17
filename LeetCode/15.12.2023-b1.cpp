// https://leetcode.com/problems/valid-palindrome/description/
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("03")
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) {
            return true;
        }
        int i=0, j=s.size()-1;
        while(i<j) {
            if(!isalnum(s[i])) {
                i++;
            }
            else if(!isalnum(s[j])) {
                j--;
            }
            else if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;     
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution a;
    cout << a.isPalindrome(s);
    return 0;
}