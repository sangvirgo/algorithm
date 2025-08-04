#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 1) return "";
        int res=1;
        int start=0;
        for(int i=0; i<s.size(); i++) {
            int l=i, r=i;
            while(l>=0 && r<s.size() && s[r]==s[l]) {
                if(r-l+1>res) {
                    res=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
            l=i, r=i+1;
            while(l>=0 && r<s.size() && s[r]==s[l]) {
                if(r-l+1>res) {
                    res=r-l+1;
                    start=l;
                }
                l--;
                r++;
            } 
        }
        return s.substr(start, res);
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
string s="babad";
cout << a.longestPalindrome(s);
return 0;
}