// https://leetcode.com/problems/search-insert-position/ 
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while (l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target) {
                return m;
            }
            else if(nums[m]<target) {
                l=m+1;
            }
            else {
                r=m-1;
            }
        }
        return l;
    }
};

int main() {
    Solution solution;

    // Example 1
    std::vector<int> nums1 = {1, 3, 5, 6};
    int target1 = 5;
    std::cout << "Example 1: " << solution.searchInsert(nums1, target1) << std::endl;

    // Example 2
    std::vector<int> nums2 = {1, 3, 5, 6};
    int target2 = 2;
    std::cout << "Example 2: " << solution.searchInsert(nums2, target2) << std::endl;

    // Example 3
    std::vector<int> nums3 = {1, 3, 5, 6};
    int target3 = 7;
    std::cout << "Example 3: " << solution.searchInsert(nums3, target3) << std::endl;

    return 0;
}
