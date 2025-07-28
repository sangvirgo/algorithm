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
        if(s.size()%2!=0) return 0;
        int n=s.size();
        for(int i=1; i<=n/2; i++) {
            string temp="";
            string ss=s.substr(0, i);
            while(temp.size()<n) {
                temp+=ss;
            }
            cout << temp << endl;
            if(temp==s) {
                return true;
            }
        }
        return false;
    }   
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.repeatedSubstringPattern("babbabbabbabbab");
return 0;
}