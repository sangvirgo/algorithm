#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> cnt(n+1, 0);
        for(int i=0; i<n; i++) {
            cnt[nums[i]]++;
        }
        for(int i=0; i<n; i++) {
            if(cnt[i]==0) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> nums={9,6,4,2,3,5,7,0,1};
cout << a.missingNumber(nums);
return 0;
}