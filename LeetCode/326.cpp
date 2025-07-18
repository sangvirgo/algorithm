#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return 0;
        if(n==1) return 1;
        while(n>1 && n%3==0) {
            cout << "before: " << n << endl;
            n/=3;
            cout << "after: " << n << endl;
        }
        if(n==1) return 1;
        else return 0;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isPowerOfThree(45);
return 0;
}