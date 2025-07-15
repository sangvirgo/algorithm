#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> rs;
        for(int i=0; i<nums.size(); i++) {
            int fisrtNum=nums[i];
            bool isOne=true;
            while(nums[i]==nums[i+1]-1 && i<nums.size()) {
                i++;
                isOne=false;
            }
            int lastNum=nums[i];
            if(isOne) {
                rs.push_back(to_string(fisrtNum));
            } else {
                rs.push_back(to_string(fisrtNum) + "->" + to_string(lastNum));
            }
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> temp={0,1,2,4,5,7};
vector<string> rs= a.summaryRanges(temp);
for(auto it: rs) {
    cout << it << endl;
}
return 0;
}