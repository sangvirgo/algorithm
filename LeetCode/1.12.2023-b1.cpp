// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // tra ve vi tri ma co target or vi tri khong nho hon target
        int l=lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int r=lower_bound(nums.begin(), nums.end(), target+1)-nums.begin();
        if(l==r) {
            return {-1, -1};
        }
        else {
            return {l, r-1};
        }
    }
};

int main() {
    vector<int> ums = {5, 7, 7, 8, 8, 10};
    int  target = 8;
    Solution a;

    vector<int> result=a.searchRange(ums, target);
    cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}



