#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

map<int, int> m;
for(int i=0; i<5; i++) {
    int x, y; cin >> x >> y;
    m[x]=y;
}

for(auto it: m) {
    cout << it.first << " " << it.second << endl;
}
return 0;
}