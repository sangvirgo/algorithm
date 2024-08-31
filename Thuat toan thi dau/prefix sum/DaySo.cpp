#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://oj.vnoi.info/problem/nkseq
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<int> a(2*n+2, 0);
for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i+n] = a[i];
}

vector<int> f(2*n+2, 0);
for(int i=1; i<=2*n; i++) {
    f[i]=f[i-1]+a[i];
}

int res=0;
for(int i=1; i<=n; i++) {
    if(f[i]>0 && f[i+1]>0) {
        res++;
    }
}

cout << res;
return 0;
}