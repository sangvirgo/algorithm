// timf cac ki tu dung lien nhau ma co diem chung
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        // Sử dụng hàm unique để đưa các phần tử trùng lặp về cuối vector
        auto last=unique(nums.begin(), nums.end());

        // Số lượng phần tử duy nhất
        int count =distance(nums.begin(), last);

        // xoa cac phan tu trung lap
        nums.erase(last, nums.end());
        return nums.size();
    }
};

int main() {
    // Test example 1
    Solution a;
    std::vector<int> nums1 = {1, 1, 2};
    int k1 = a.removeDuplicates(nums1);
    std::cout << "Output: " << k1 << ", nums = [";
    for (int i = 0; i < k1; ++i) {
        std::cout << nums1[i];
        if (i < k1 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    // Test example 2
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = a.removeDuplicates(nums2);
    std::cout << "Output: " << k2 << ", nums = [";
    for (int i = 0; i < k2; ++i) {
        std::cout << nums2[i];
        if (i < k2 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    return 0;
} 