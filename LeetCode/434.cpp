#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int cnt=0;
        while(ss>>word) {
            cnt++;
        }
        return cnt;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.countSegments("Hello, my name is John");
return 0;
}