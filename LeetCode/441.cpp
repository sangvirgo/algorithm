#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int arrangeCoins(int n) {
        int rs=0;
        for(int i=1; i<=n; i++) {
            n-=i;
            if(n>=0) {
                rs++;
            } else {
                break;
            }
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.arrangeCoins(8);
return 0;
}