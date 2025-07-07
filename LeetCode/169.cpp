#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long long, int> temp;
        for(const auto& it: nums) {
            temp[it] = 0;
        }

        for(const auto& it: nums) {
            temp[it]++;
            if(temp[it]>(nums.size()/2)) return it;
        }
        return 0;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> nums ={2,2,1,1,1,2,2};
cout << a.majorityElement(nums);
return 0;
}