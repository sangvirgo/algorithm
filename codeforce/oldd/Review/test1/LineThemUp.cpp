#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/lineup
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
vector<string> s(t), increaseS(t), decreaseS(t);

for(int i=0; i<t; i++) {
    cin >> s[i];
    increaseS[i]=s[i];
    decreaseS[i]=s[i];
}
sort(increaseS.begin(), increaseS.end());
sort(decreaseS.begin(), decreaseS.end(), greater<string>());

bool inc=true, dec=true;

for(int i=0; i<t; i++) {
    if(s[i]!=increaseS[i]) {
        inc=false;
        break;
    }
}

if(!inc) {
    for(int i=0; i<t; i++) {
        if(s[i]!=decreaseS[i]) {
            dec=false;
            break;
        }
    }
}

if(inc) {
    cout << "INCREASING";
} else if(dec) {
    cout << "DECREASING";
} else {
    cout << "NEITHER";
}
return 0;
}