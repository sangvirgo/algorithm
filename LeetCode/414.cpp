#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int maxValue = nums[0];
        int secondValue= INT_MIN;
        int thirdValue=INT_MIN;
        for(int i=1; i<nums.size(); i++) {
            if(maxValue!=nums[i] && secondValue==INT_MIN) secondValue=nums[i];
            if(secondValue!=nums[i] && thirdValue==INT_MIN) secondValue=nums[i];
            if(secondValue != INT_MIN && thirdValue!=INT_MIN) break;
        }
        if(thirdValue==INT_MIN) return maxValue;
        else return thirdValue;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<int> temp={3,2,1};
Solution a;
cout << a.thirdMax(temp);

return 0;
}