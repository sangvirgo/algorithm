#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=(nums[0])?1:0;
        int maxRes=res;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]==1) {
                res++;
                maxRes=max(res, maxRes);
            }
            if(nums[i]==0) {
                res=0;
            }
        }
        return maxRes;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<int> temp={1,1,0,1,1,1};
Solution a;
cout << a.findMaxConsecutiveOnes(temp);
return 0;
}