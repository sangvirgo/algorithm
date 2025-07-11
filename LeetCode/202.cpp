#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    bool isHappy(int n) {
        if(n<5 and n!=1) return false;
        while(n!=1) {
            int temp=0;
            while(n>0) {
                temp+=pow(n%10, 2);
                n/=10;
            }
            if(temp<5 and temp!=1) return false;
            n=temp;
        }
        return true;
    }
};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.isHappy(2);
return 0;
}