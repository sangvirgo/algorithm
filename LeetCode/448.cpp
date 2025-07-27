#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        // Mảng đếm chỉ cần kích thước n+1
        vector<int> cnt(n + 1, 0);
        vector<int> rs;

        // Đánh dấu các số đã xuất hiện
        for(int num : nums) {
            cnt[num] = 1;
        }

        // Duyệt trong phạm vi đúng: từ 1 đến n
        for(int i = 1; i <= n; i++) {
            // Nếu số i chưa được đánh dấu, nó là số bị thiếu
            if (cnt[i] == 0) {
                rs.push_back(i);
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
vector<int> temp={4,3,2,7,8,2,3,1};
vector<int> rs=a.findDisappearedNumbers(temp);
for(auto it:rs) {
    cout << it << " ";
}
return 0;
}