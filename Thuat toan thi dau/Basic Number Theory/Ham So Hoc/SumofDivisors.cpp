#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://cses.fi/problemset/task/1082
*/
int Divisors(int n) {
    int res=1+n;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            if(n/i==i) {
                res+=i;
            } else {
                res+=n/i;
                res+=i;
            }
        }
    }
    return res;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
int result=1;
for(int i=2; i<=n; i++) {
    result+=Divisors(i);
}
cout << result;
// cout << Divisors(5);
return 0;
}