#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int reverse(int x) {
        long long rs=0;
        while(x!=0) {
            rs=rs*10+x%10;
            x/=10;
        }
        if(rs<INT_MIN || rs>INT_MAX) return 0;
        return (int)rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


Solution a;
cout << a.reverse(-123);
return 0;
}

