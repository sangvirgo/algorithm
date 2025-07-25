#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string rs="";
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry >0) {
            int a = (i>=0) ? num1[i] - '0' : 0;
            int b = (j>=0) ? num2[j] - '0' : 0;
            int sum=a+b+carry;
            rs+=to_string(sum%10);
            carry=sum/10;
            j--;
            i--;
        }
        reverse(rs.begin(), rs.end());
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.addStrings("456", "77");
return 0;
}