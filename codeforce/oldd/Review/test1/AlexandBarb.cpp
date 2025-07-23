#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/alexandbarb
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll k, m, n; cin >> k >> m >> n;
ll sum=n+m;
// if(sum==0) sum=1;
if(k%(sum)>=m) cout << "Alex";
else cout << "Barb";
return 0;
}