#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://oj.vnoi.info/problem/tnhtest
*/
ll powMod(ll a, ll b, ll m) {
    ll result=1;
    while(b>0) {
        if(b&1) result=result*a%m;
        a=a*a%m;
        b/=2;
    }
    return result;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll a, b, m;
cin >> a >> b >> m;
cout << powMod(a, b, m);
return 0;
}