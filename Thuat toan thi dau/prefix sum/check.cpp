#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://codeforces.com/contest/1398/problem/C
*/
ll t, n, sum, ans;
map<ll, ll> cnt;
string s;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    sum=0, ans=0; cin >> n;
    cin >> s;
	cnt.clear();
    cnt[0] = 1;
    for(int i=0; i<n; i++) {
        sum+=s[i]-'1';
        ans+=cnt[sum];
        cnt[sum]++;
    }

    cout << ans << endl;
}
return 0;
}