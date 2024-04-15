#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
*/

class Solution {
public:
    int coutBits(int n) {
        int count=0;
        while(n) {
            count +=n&1;
//num & 1: Phép AND bit (bitwise AND) giữa num và 1 sẽ trả về 1 nếu bit cuối cùng của num là 1 và trả về 0 nếu bit cuối cùng của num là 0. Kết quả của phép AND này sẽ được cộng vào biến count. Điều này giúp chúng ta đếm số lượng bit 1 trong num.
            n >>=1;
        }
        return count;
    }

    bool compare(int a, int b) {
        int count1=coutBits(a);
        int count2=coutBits(b);
        if(count1==count2) return a<b;
        return count1<count2;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            return compare(a, b);
        });
        return arr;
    }
};
int main() {

return 0;
}