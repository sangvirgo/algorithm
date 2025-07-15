#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        while(n%2==0 && n>2) {
            n/=2;            
        }
        if(n==2) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isPowerOfTwo(16);
return 0;
}