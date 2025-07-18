#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class NumArray {
private: 
    vector<int> prefixSums;
public:
    NumArray(vector<int>& nums) {
        prefixSums.resize(nums.size()+1, 0);
        for(int i=0; i<nums.size(); i++) {
            prefixSums[i+1]=prefixSums[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSums[right+1]-prefixSums[left];
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}