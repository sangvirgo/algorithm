#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/sqrtx/description/
*/
class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0) return x;

        int left=1, right=x;
        int result;

        while(left<=right) {
            int mid = left+(right-left)/2;

            if(mid<=(x/mid)) {
                left=mid+1;
                result=mid;
            } else {
                right=mid-1;
            }
        }
        return result;
    }
};

int main() {
    Solution a;
    cout <<  a.mySqrt(8);
return 0;
}