#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://leetcode.com/problems/zigzag-conversion/description/
*/
class Solution {
public:
    string convertt(string s, int numRows) {
        if(s.size()==1) return s;

        int i=0, k=-1;
        vector<string> result(numRows);
        for(char c:s) {
            result[i]+=c;
            if(i==0 || i==numRows-1) k=-k;
            i+=k;
        }

        string ans;
        for(auto it: result) {
            ans+=it;
        }
        return ans;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
string s = "PAYPALISHIRING";
int numRows = 3;

cout << a.convertt(s, numRows) << endl;
return 0;
}