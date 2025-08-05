#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()==1) return 1;
        unordered_map<int, int> m;
        int l=0, r=0, res=0;
        while(r<fruits.size()) {
           m[fruits[r]]++;
           while(m.size()>2) {
                m[fruits[l]]--;
                if(m[fruits[l]]==0) {
                    m.erase(fruits[l]);
                }
                l++;
           }
           res=max(res, r-l+1);
           r++;
        }
        return res;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> f={1,2,1};
cout << a.totalFruit(f);
return 0;
}