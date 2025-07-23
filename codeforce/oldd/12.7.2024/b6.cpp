#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://codeforces.com/contest/1992/problem/A
*/


int main() {
int t; cin >> t;
while(t--)  {
    int sum=1;
    int a, b, c; cin >> a >> b >> c;
    for(int i=0; i<5; i++) {
        if(a<=b && a<=c) a++;
        else if(b<=a && b<=c) b++;
        else c++;

    }
    cout << a*b*c << endl;
}
return 0;
}