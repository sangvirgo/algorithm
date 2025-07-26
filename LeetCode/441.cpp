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
        long long rs=0;
        long long l=1;
        long long r=n;
        while(l<=r) {
            long long mid = l + (r-l)/2;
            long long coin=mid*(mid+1)/2;
            if(coin<=n) {
                rs=mid;
                l=mid+1;
            } else {
                r=mid-1;
            }
        }
        return (int)rs;
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