#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> rs;
        for(int i=0; i<nums.size()-1; i++) {
            int j=i;
            vector<int> temp;
            while(1) {
                temp.push_back(nums[j]);
                j++;
                if(nums[j]!=nums[j+i]-1) break;
            }
            i+=j-1;
            if(temp.size()==1) {
                string tempp="";
                tempp+="\"";
                tempp+=to_string(temp[0]);
                tempp+="\"";
                rs.push_back(tempp);
            } else {
                string tempp="";
                tempp+="\"";
                tempp+=to_string(temp[0]);
                tempp+="->";
                tempp+=to_string(temp[temp.size()-1]);
                tempp+="\"";
                rs.push_back(tempp);
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
vector<int> temp={0,1,2,4,5,7};
vector<string> rs= a.summaryRanges(temp);
for(auto it: rs) {
    cout << it << endl;
}
return 0;
}