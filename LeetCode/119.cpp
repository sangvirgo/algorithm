#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> rs(rowIndex+1, 0);

        rs[0] =1;

        for(int i=1; i<=rowIndex; i++) {
            for(int j=i; j>=1; j--) {
                rs[j] = rs[j]+rs[j-1];
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
vector<int> rs=a.getRow(4);


for (const auto& element : rs) {
    cout << element << " ";
}

return 0;
}