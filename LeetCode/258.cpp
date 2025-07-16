#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int addDigits(int num) {
        while(num>=10) {
            int temp=0;
            int tempNum=num;
            while(tempNum>0) {
                temp+=tempNum%10;
                tempNum/=10;
            }
            num=temp;
        }
        return num;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.addDigits(11);
return 0;
}