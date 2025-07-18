#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return 0;
        while(n%3==0 || n%2==0 || n%5==0) {
            if(n%3==0) n/=3;
            if(n%2==0) n/=2;
            if(n%5==0) n/=5;
        }
        if(n==1 || n==2 || n==3 ||n==5) return 1;
        if(n%3!=0 && n%2!=0 && n%5!=0) {
            return 0;
        } else {
            return 1;
        }
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isUgly(6);
return 0;
}