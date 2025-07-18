#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> rs(n+1, 0);
        if(n>=1) rs[1]=1;
        for(int i=2; i<=n; i++) {
            rs[i]=rs[i/2]+ (i&1);
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> rs=a.countBits(10);

for(auto it: rs) {
    cout << it << " ";
}
return 0;
}