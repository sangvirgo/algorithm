#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int rs=0;
        for(int i =0; i<columnTitle.length(); i++) {
            rs =rs*26 + (columnTitle[i] -'A' + 1);
        }
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
// cout << a.titleToNumber("ZY") << endl;
cout << a.titleToNumber("A") << endl;
cout << a.titleToNumber("FXSHRXW")<< endl;

return 0;
}


/*
2147483647

217479168
*/