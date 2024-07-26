#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://wiki.vnoi.info/translate/he/So-hoc-Phan-1-Modulo-gcd
*/
int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a&b);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}