#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int rs=0;
        int i=0, j=0;
        while(i<g.size() && j<s.size()) {
            if(g[i]<=s[j]) {
                rs++;
                i++;
            } 
            j++;
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> g={1,2};
vector<int> s={1,2,3};
cout << a.findContentChildren(g, s);
return 0;
}