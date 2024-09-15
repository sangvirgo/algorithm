#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
ACM-ICPC returns to Singapore in 2015 after a long absence. There may be new contestants from this region who are joining ACM-ICPC for the very first time1. This problem serves as a tutorial for such contestants.

First, let establish the fact that the problems posed in ICPC are not research problems where nobody on earth knows how to solve them efficiently. Some people (at least the problem authors) have solved these problems before. There can be more than one possible solution to these problems. As the contest has limited time (5 hours) and each problem has an associated time penalty, it is always beneficial to pick the easiest problem to solve first2.

Some problems may look complicated but happen to have a small input size constraint 
 that allows even a naïve brute force solution to pass. Some other problems may look simple but standard textbook algorithm cannot be used to pass the time limit as the input size constraint 
 is too big and one has to figure out the special properties that simplify the problem.

In the “Competitive Programming” book3 that has been written specifically for preparing for programming contests such as ICPC, we have the following compilation of typical algorithm complexities found in programming contests:


algorithm complexity for input size 

1


2


3


4


5


6


7


For this problem, we ignore the constant factor and the lower terms hidden in the Big O notation, i.e. an 
 algorithm is assumed to perform exactly 
 operations.

Let 
 be the number of operations that the computer used in the contest4 can run in one second. Suppose 
 and the team is trying to solve a problem with a time limit of one second. If the team can devise an algorithm of type 
, i.e., a rather slow 
 algorithm, but the largest 
 mentioned in the problem description is just 
, then this algorithm is actually fast enough and will get “Accepted” since 
 is less than (or equal to) 
.

However, if for another problem also with one second time limit, the team can only devise an algorithm of type 
, i.e. an 
 algorithm, but the largest 
 mentioned in the problem description is 
, then this algorithm is likely not fast enough to pass the time limit and will get “Time Limit Exceeded”, since 
 which is greater than 
.


Formally, given three integer parameters 
 
, 
 
, and 
, decide if an algorithm of type 
 with time complexity as described in the table above can pass the time limit of one second, that is, performs less than (or equal to) 
 operations. Output “AC” (that stands for “Accepted”) if that is the case, or “TLE” (that stands for “Time Limit Exceeded”) otherwise.

Input
The input consists of three integers in one line: 
, 
, and 
 as elaborated above.

Output
Output a single string “AC” or “TLE” in one line as elaborated above.

Sample Input 1	Sample Output 1
100000000 500 3
TLE
Sample Input 2	Sample Output 2
100000000 50 3
AC
Sample Input 3	Sample Output 3
100000000 10001 5
TLE
Sample Input 4	Sample Output 4
100000000 10000 5
AC
Sample Input 5	Sample Output 5
19931568 1000000 6
TLE
Sample Input 6	Sample Output 6
19931569 1000000 6
AC
*/
bool pow(ll a, ll b, ll m) {
    ll result=1;
    while(b>0) {
        if(b&1) result=result*a;
        if(result>m) return false;
        a=a*a;
        b/=2;
    }
    return result<=m;
}

bool factor(ll n, ll m) {
    ll result=1;
    for(int i=1; i<=n; i++) {
        result*=i;
        if(result>m) return false;
    }
    return result<=m;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll m, n, t; cin >> m >> n >> t;
switch (t){
case 1:
    if(factor(n, m)) cout << "AC";
    else cout << "TLE";
    break;

case 2:
    if(pow(2, n, m)) cout << "AC";
    else cout << "TLE";
    break;

case 3:
    if(pow(n, 4, m)) cout << "AC";
    else cout << "TLE";
    break;

case 4:
    if(pow(n, 3, m)) cout << "AC";
    else cout << "TLE";
    break;

case 5:
    if(pow(n, 2, m)) cout << "AC";
    else cout << "TLE";
    break;

case 6:
    if(m>=n*log2(n)) cout << "AC";
    else cout << "TLE";
    break;

case 7:
    if(m>=n) cout << "AC";
    else cout << "TLE";
    break;
default:
    break;
}
return 0;
}