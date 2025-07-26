#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> cnt(100007,0);
        vector<int> rs;
        for(auto it:nums) {
            cnt[it]=1;
        }
        for(int i=1; i<=100000; i++) {
            if(!cnt[it])
        }
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> temp={4,3,2,7,8,2,3,1};
vector<int> rs=a.findDisappearedNumbers(temp);
for(auto it:rs) {
    cout << it << " ";
}
return 0;
}