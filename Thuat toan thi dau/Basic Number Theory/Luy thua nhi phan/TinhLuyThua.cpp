#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://wiki.vnoi.info/algo/algebra/binary_exponentation.md
*/

ll Pow(ll a, ll b) {
    ll result=1;
    while(b>0) {
        if(b&1) result=result*a; // b le
        a=a*a;
        b/=2; 
    }
    return result;
}

ll PowMod(ll a, ll b, ll m) {
    ll result=1;
    while(b>0) {
        if(b&1) result=result*a%m;
        a=a*a%m;
        b/=2;
    }
    return result;
}

ll Mul(ll a, ll b, ll m) {
    if(!b) return 0;
    ll x=Mul(a, b/2, m);

    if(b%2==0) {
        return 2*x%m;
    } else {
        return (2*x+a) % m;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cout << Pow(3, 10) << endl;
cout << PowMod(3, 10, 4);
return 0;
}