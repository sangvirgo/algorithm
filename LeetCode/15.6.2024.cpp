#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/merge-sorted-array/description/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result(m+n);
        vector<int> checked;
        int i=0, j=0;
        while(i<m && j<n) {
            if(checked[nums1[i]]==0 && nums1[i]<nums2[j]) {
                result.push_back(nums1[i]);
                checked[nums1[i]]=1;
                i++;
            } 
        }
    }
};
int main() {

return 0;
}