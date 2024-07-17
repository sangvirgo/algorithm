#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/P182PROA

12 4 12 4 1
c v0 v1 a l

1: 4
2: 4+4+1
3: 4+2*4+1
*/
int main() {
int c, v0, v1, a, l, days=0, pageRead=0; cin >>c>> v0>> v1>>a >> l;

while(pageRead<c) {
    days++;
    if(days==1) pageRead+=v0;
    else {
        v0=min(v1, v0+a);
        pageRead+=v0-l;
    }
}
cout << days;
return 0;
}