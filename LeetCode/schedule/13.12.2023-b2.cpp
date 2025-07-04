// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, minn=prices[0];
        for(auto& it: prices) {
            ans=max(ans, it-minn);
            minn=min(minn, it);
        }
        return ans;
    }
};


int main() {
    vector<int> prices = {7,1,5,3,6,4};
    Solution a;
    cout << a.maxProfit(prices);
    return 0;
}

