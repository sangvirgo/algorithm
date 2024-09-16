#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/pr5uch/problems/malfunctioningrobot
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    ll x1, y1, x2, y2; 
    cin >> x1 >> y1 >> x2 >> y2;
    ll absX= llabs(x2-x1);
    ll absY= llabs(y2-y1);
    if(absX%2==absY%2) {
        cout << max(absX, absY)*2 << endl;
    } else {
        cout << 2*max(absX, absY)-1 << endl;
    }
}
return 0;
}