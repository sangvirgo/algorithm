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
    int x1, y1, x2, y2; 
    cin >> x1 >> y1 >> x2 >> y2;
    int absX= abs(x2-x1);
    int absY= abs(y2-y1);
    if(absX==absY) {
        cout << absX+absY << endl;
    } else {
        cout << 2*min(absX, absY)+abs(absX-absY) << endl;
    }
}
return 0;
}