#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/climbing-stairs/description/
*/

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==1) return 1;
//         else if(n==2) return 2;

//         vector<int> fibo(n+1, 0);
//         fibo[1]=1;
//         fibo[2]=2;
//         for(int i=3; i<=n; i++)  {
//             fibo[i]=fibo[i-1]+fibo[i-2];
//         }
//         return fibo[n];
//     }
// };


//method 2
class Solution {
public:
    int climbStairs(int n) {
        int a=0, b=1;
        for(int i=0; i<n; i++) {
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};

int main() {
Solution a;
cout <<  a.climbStairs(3);
return 0;
}           