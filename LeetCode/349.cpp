#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rs;
        vector<int> cnt1(1001, 0);
        vector<int> cnt2(1001, 0);
        for(const auto& it: nums1) {
            cnt1[it]++;
        }
        for(const auto& it: nums2) {
            cnt2[it]++;
        }
        for(int i=0; i<cnt1.size(); i++) {
            if(cnt1[i]!=0 && cnt2[i]!=0) rs.push_back(i);
        }
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}