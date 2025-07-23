#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
const int MOD = 1e9 + 7;
/*
Problem A
Sum Kind of Problem
For this problem you will compute various running sums of values for positive integers.

Input
The first line of input contains a single integer 
, (
), which is the number of data sets that follow. Each data set should be processed identically and independently. Each data set consists of a single line of input. It contains the data set number, 
, followed by an integer 
, (
).

Output
For each data set there is one line of output. The single output line consists of the data set number, 
, followed by a single space followed by three space separated integers 
, 
 and 
 such that:

 = The sum of the first 
 positive integers.

 = The sum of the first 
 odd integers.

 = The sum of the first 
 even integers.

Sample Input 1	Sample Output 1
3
1 1
2 10
3 1001
1 1 1 2
2 55 100 110
3 501501 1002001 1003002
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


vector<ll> sum(MAX);
vector<ll> odd(MAX);
vector<ll> even(MAX);

sum[0]=0, even[0]=0;
for(int i=1; i<=MAX; i++) {
    sum[i]+=sum[i-1]+i;
    odd[i]=i*i;
    even[i]=i*2+even[i-1];
}




int t; cin >> t;
while(t--) {
    int x, n; cin >> x >> n;
    cout << x << " " << sum[n] << " " << odd[n] << " " << even[n]<< endl;
}
return 0;
}