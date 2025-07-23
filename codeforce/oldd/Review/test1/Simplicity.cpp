#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/simplicity
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; cin >> s;
vector<int> cnt(26);

for(char c: s) {
    cnt[c-'a']++;
}

sort(cnt.begin(), cnt.end());

int distinct=0;
for(int i=0; i<26; i++) {
    if(cnt[i]) distinct++;
}
if(distinct<=2) {
    cout << 0;
    return 0;
}
cout << distinct-2;
return 0;
}