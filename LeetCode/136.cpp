#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
const int hihi= 3e4 +7;
/*

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rs=0;
        for(auto it: nums) {
            rs=rs^it;
        }
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> nums={4,1,2,1,2};

cout << a.singleNumber(nums);
return 0;
}