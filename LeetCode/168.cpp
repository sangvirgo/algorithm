#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    string convertToTitle(int columnNumber) {
        string rs;
        while(columnNumber>0) {
            columnNumber--;
            char c='A' + (columnNumber%26);
            rs+=c;
            columnNumber/=26;
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
cout << a.convertToTitle(2147483647) << endl;
// cout << a.convertToTitle(701) << endl;
return 0;
}