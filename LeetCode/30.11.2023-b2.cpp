// https://leetcode.com/problems/add-binary/description/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")

class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1;
        string ans;
        for(int carry=0; i>=0 || j>=0 || carry!=0; --i, --j ) {
            int digita, digitb;
            if(i>=0) {
                digita=a[i]-'0';
            }
            else {
                digita=0;
            }
            //  cach viet nhanh
            digitb=(j>=0) ? b[j]-'0' : 0;

            int sum= digita+digitb+carry;

            if(sum%2==0) {
                ans.push_back('0');
            }
            else {
                ans.push_back('1');
            }

            carry=sum/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    string a="11", b="1", c="1010", d="1011";
    Solution z;
    cout << z.addBinary(a, b);
    cout << endl;
    cout << z.addBinary(c, d);
    return 0; 
}