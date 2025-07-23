#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/problemset/problem/4/A
*/

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int w;
cin >> w;
if(w%2!=0 || w==2) cout << "NO";
else {
    cout << "YES";
}
return 0;
}