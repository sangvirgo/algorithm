#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/problemset/problem/71/A
*/


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; 
cin >> t;
while(t--) {
    string s; 
    cin >> s;
    int SSize=s.size();
    if(SSize>10) {
        string rs="";
        rs+=s[0];
        rs+=to_string(SSize-2);
        rs+=s[SSize-1];
        cout << rs << endl;
    } else {
        cout << s << endl;
    }
}
return 0;
}