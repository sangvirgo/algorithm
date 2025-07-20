#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cnt1(256, 0);
        vector<int> cnt2(256, 0);
        for(auto it: ransomNote) {
            cnt1[it]++;
        }
        for(auto it: magazine) {
            cnt2[it]++;
        }
        for(auto it: ransomNote) {
            if(cnt1[it]>cnt2[it]) return 0;
        }
        return 1;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}