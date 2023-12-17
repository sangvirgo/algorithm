// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        vector<int> temp(n, chalk[0]);
        for(int i=1; i<n; i++) {
            temp[i]=temp[i-1]+chalk[i];
        }
        k%=temp[n-1];
        return upper_bound(temp.begin(), temp.end(), k)-temp.begin();
    }
};

int main() {
    vector<int> chalk={3,4,1,2}; int k=25;
    Solution a;
    cout << a.chalkReplacer(chalk, k);
    return 0;
}