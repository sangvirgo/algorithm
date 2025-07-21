#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> cnt(256, 0);
        for(auto it: s) {
            cnt[it]++;
        }
        for(int i=0; i<s.size(); i++) {
            if(cnt[s[i]]==1) return i;
        }
        return -1;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}