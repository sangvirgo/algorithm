// https://leetcode.com/problems/two-sum/submissions/1021882216/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0; ; i++) {
            int x=nums[i];
            int y=target-x;
            if(m.count(y)){
                return {m[y], i};
            }
            else {
                m[x]=i;
            }
        }        
    }
};


int main() {
    Solution a;
    vector<int> nums={2, 7, 11, 15};
    int target=9;

    for(auto it : a.twoSum(nums, target)) {
        cout << it << " ";
    }
    return 0;
}