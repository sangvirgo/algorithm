#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt(256, 0);
        for(auto it: s) {
            cnt[it]++;
        }
        for(auto it: t) {
            cnt[it]--;
        }
        for(auto it: cnt) {
            if(it!=0) return 0;
        }
        return 1;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isAnagram("anagram", "nagaram");
return 0;
}