#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://wiki.vnoi.info/translate/he/Number-Theory-3
*/
int powerr(int a) {
    return a*a;
}

int pow(int a, int b, int mod) {
    if(b==0) return 1%mod;
    if(!b&1) {
        return powerr(pow(a, b/2))%mod;
    } else {
        return a*(powerr(pow(a, b/2))%mod)%mod;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


cout << pow(2, 5, 5);
return 0;
}