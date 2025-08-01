#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> storeLocation(1003, 0);
        vector<int> rs;
        for(int i=0; i<nums2.size(); i++) {
            storeLocation[nums2[i]]=i;
        }
        for(int i=0; i<nums1.size(); i++) {
            int x=nums1[i];
            int done=-1;
            int j=storeLocation[x]+1;
            for(; j<nums2.size(); j++) {
                if(x<nums2[j]) {
                    done=nums2[j];
                    break;
                }
            }
            rs.push_back(done);
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

vector<int> temp={4,1,2};
vector<int> temp2={1,3,4,2};
Solution a;
vector<int> rs=a.nextGreaterElement(temp, temp2);
for(auto it:rs) {
    cout << it << endl;
}
return 0;
}