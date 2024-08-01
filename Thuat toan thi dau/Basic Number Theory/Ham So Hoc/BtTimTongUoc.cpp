#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1713/
*/

void countDivisors(int n) {
    int cnt=0;
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            if(n/i==i) cnt++;
            else cnt+=2;
        }
    }
    cout << cnt << endl;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t; 
while(t--) {
    int n; cin >> n;
    countDivisors(n);
}
return 0;
}