#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v1(256, 0);
        vector<int> v2(256, 0);
        for(int i=0; i<s.length(); i++) {
            if(v1[s[i]]!=v2[t[i]]) return false;
            v1[s[i]]=i+1;
            v2[t[i]]=i+1;
        }
        return true;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isIsomorphic("egg", "add") ;
return 0;
}