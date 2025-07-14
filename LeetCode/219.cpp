#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        for(int i=0; i<nums.size(); i++) {
            if(i>k) {
                window.erase(nums[i-k]);
            }
            if(window.count(nums[i])) {
                return true;
            }
            window.insert(nums[i]);
        }
        return false;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}