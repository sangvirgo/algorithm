#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<int> constructRectangle(int area) {
        for(int i=sqrt(area); i>0; i--) {
            if(area%i==0) {
                int l = area / i;
                return {l, i};
            }
        }
        return {};
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
int area=2;
vector<int> rs=a.constructRectangle(area);
cout << rs[0] << ": " << rs[1];
return 0;
}