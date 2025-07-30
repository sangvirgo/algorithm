#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int findComplement(int num) {
        long long mask=1;
        while(mask<=num) {
            mask=mask*2;
        }
        mask--;
        return num^mask;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.findComplement(5);
return 0;
}