    // https://leetcode.com/problems/sort-an-array/description/
    #include <bits/stdc++.h>
    using namespace std;

    class Solution {
    public:
        vector<int> sortArray(vector<int>& nums) {
            function<void(int, int)> QuickSort=[&](int l, int r) {
                if(l>=r) {
                    return;
                }
                    int i=l-1, j=r+1;
                    int pivot=nums[(l+r)/2];
                    while(i<j) {
                        while(nums[++i]<pivot);
                        while(nums[--j]>pivot);
                        if(i<j) {
                            swap(nums[i], nums[j]);
                        }
                }
                QuickSort(l, j);
                QuickSort(j+1, r);
            };

            // call quick sort to start sorting the array
            QuickSort(0, nums.size()-1);
            return nums;
        }
    };



    int main() {
        // Example usage
        vector<int> nums = {5,1,1,2,0,0};
        
        Solution solution;
        vector<int> sortedArray = solution.sortArray(nums);

        // Print the sorted array
        cout << "Sorted Array: ";
        for (int num : sortedArray) {
            cout << num << " ";
        }
        cout << endl;

        return 0;
    }
