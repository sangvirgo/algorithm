#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> cnt(128, 0);
        for(const auto& it: s) {
            cnt[it]++;
        }
        bool hasOdd=0;
        int rs=0;
        for(auto it:cnt) {
            rs+=(it/2)*2;
            if(it%2==1) hasOdd=1;
            // cout << it ;
        }
        if(hasOdd) rs+=1;
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.longestPalindrome("ccc");
return 0;
}