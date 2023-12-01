// https://leetcode.com/problems/plus-one/description/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int last=digits.size()-1;
         digits[last]++;
        while(digits[last]==10) {
            digits[last]=0;
            last--;
            if(last==-1) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
            digits[last]++;
        }
         return digits;
    }
};

int main() {
    vector<int> example1 = {1, 2, 3};
    Solution a;
    vector<int> result1 = a.plusOne(example1);
    cout << "Example 1: [1, 2, 3] + 1 = ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> example2 = {4, 3, 2, 1};
    vector<int> result2 = a.plusOne(example2);
    cout << "Example 2: [4, 3, 2, 1] + 1 = ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> example3 = {9};
    vector<int> result3 = a.plusOne(example3);
    cout << "Example 3: [9] + 1 = ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

