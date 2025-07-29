#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss=s+s;
        string trimed=ss.substr(1, ss.size()-2);
        return trimed.find(s)!=string::npos;
    }   
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s="babbabbabbabbab";
string ss="ababab";
Solution a;
cout << a.repeatedSubstringPattern("babbabbabbabbab");

cout << bool(s.find(ss)==string::npos);
return 0;
}