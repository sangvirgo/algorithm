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

int t;
cin >> t;
int rs=0;
while(t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c>=2) rs++;
}
cout << rs;
return 0;
}