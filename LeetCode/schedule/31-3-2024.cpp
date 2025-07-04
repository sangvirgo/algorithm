#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/add-binary/
*/
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1; int j=b.length()-1;
        string result;
        for(int remainder=0; i>=0 || j>=0 || remainder!=0; i--, j--) {
            int digitA=(i>=0) ? a[i]-'0': 0;
            int digitB=(j>=0) ? b[j]-'0': 0;

            int sum = digitA+digitB+remainder;

            (sum%2==0) ? result.push_back('0') : result.push_back('1');
            
            remainder=sum/2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
string a = "11", b = "1";
Solution solution;
cout << solution.addBinary(a, b);
return 0;
}