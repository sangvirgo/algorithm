#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/color?tab=submissions
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int s, c, k; cin >> s >> c >> k;
vector<int> socks(s);
for(int i=0; i<s; i++) cin >> socks[i];

int res=0;
sort(socks.begin(), socks.end());
for(int i=0; i<s;) {
    res++;
    int preSock=socks[i];
    int j=1;
    while(i+j<s && socks[i+j]-preSock<=k && j<c) {
        j++;
    }
    i+=j;
}
cout << res;
return 0;
}