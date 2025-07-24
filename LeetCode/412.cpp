#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> rs;
        for(int i=1; i<=n; i++) {
            if(i%3==0 && i%5==0) rs.push_back("FizzBuzz");
            if(i%3==0 && i%5!=0) rs.push_back("Fizz");
            if(i%3!=0 && i%5==0) rs.push_back("Buzz");
            if(i%3!=0 && i%5!=0) rs.push_back(to_string(i));
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}