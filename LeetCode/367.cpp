#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;
        if (num == 1) return 1;

        for (long long i = 1; i * i <= num; ++i) {
            if (i * i == num) {
                return true;
            }
        }
        return false;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isPerfectSquare(2000105819);
return 0;
}