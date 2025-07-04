// https://leetcode.com/problems/remove-element/description/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) {
            return 0;
        }
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        /*
        std::remove(nums.begin(), nums.end(), val): Hàm std::remove sẽ di chuyển tất cả các phần tử có giá trị bằng val về c
        uối vector và trả về một iterator chỉ đến phần đầu của các phần tử bị loại bỏ. Lưu ý rằng nó không thực sự xóa các 
        phần tử, chỉ là di chuyển chúng về cuối.
        nums.erase(...): Hàm thành viên erase của vector được gọi với iterator trả về từ std::remove và iterator cuối cùng 
        của vector (nums.end()). Điều này có nghĩa là tất cả các phần tử từ vị trí đầu đến vị trí trả về từ std::remove đều 
        sẽ bị xóa khỏi vector.
        */
    //    auto last=unique(nums.begin(), nums.end());
    //    int count=distance(nums.begin(), last);
    //     nums.erase(last, nums.end());
        return nums.size();
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int result1 = solution.removeElement(nums1, val1);
    cout << "Test Case 1: " << result1 << endl;

    // Test case 2
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int result2 = solution.removeElement(nums2, val2);
    cout << "Test Case 2: " << result2 << endl;

    // Thêm các test case khác nếu cần

    return 0;
}

/*
#pragma GCC optimize("O3,unroll-loops")

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) {
            return 0;
        }

        int k = 0; // Biến k để đếm số lượng phần tử cần giữ

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k++] = nums[i]; // Di chuyển phần tử cần giữ đến đầu vector
            }
        }

        // Giờ nums[0..k-1] chứa các phần tử không bằng val

        return k; // Kích thước của vector sau khi loại bỏ
    }
};
*/