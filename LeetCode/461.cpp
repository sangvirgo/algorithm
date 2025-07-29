#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int rs=0;
        int xor_rs=x^y;
        while(xor_rs>0) {
            if(xor_rs%2==1) {
                rs++;
            }
            xor_rs/=2;
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.hammingDistance(93, 73);

// int xrs=1^4;
// cout << xrs;
return 0;
}