#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> cpNums;
        int cnt=0;
        for(auto it: nums) {
            if(it!=0) cpNums.push_back(it);
            else cnt++;
        }
        while(cnt!=0) {
            cpNums.push_back(0);
            cnt--;
        }
        nums.clear();
        nums=cpNums;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> temp={0,1,0,3,12};
a.moveZeroes(temp);
for(auto it: temp) {
    cout << it << " ";
}
return 0;
}