#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/P181PROI/

7
0101010

*/
int main() {
int n; cin >> n;
string binaryString; cin >> binaryString;
int cnt=0;

for(int i=0; i<n-2; i++) {
    if(binaryString.substr(i, 3)=="010") {
        cnt++;
        i+=2;
    }
}
cout << cnt;
return 0;
}