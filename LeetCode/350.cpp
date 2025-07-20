#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rs;
        vector<int> cnt1(1001, 0);
        vector<int> cnt2(1001, 0);
        for(const auto& it: nums1) {
            cnt1[it]++;
        }
        for(const auto& it: nums2) {
            cnt2[it]++;
        }
        for(int i = 0; i <= 1000; ++i) {
            if(cnt1[i] > 0 && cnt2[i] > 0) {
                int minAppear = min(cnt1[i], cnt2[i]);
                
                for (int j = 0; j < minAppear; ++j) {
                    rs.push_back(i);
                }
            }
        }
        return rs;
    }
};
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<int> n1 = {4,9,5};
vector<int> n2 = {9,4,9,8,4};
Solution a;
vector<int> rs = a.intersect(n1, n2);
for(auto it: rs) {
    cout << it << " ";
}
return 0;
}