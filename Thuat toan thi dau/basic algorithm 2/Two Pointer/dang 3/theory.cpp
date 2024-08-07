#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/algo/basic/two-pointers

7 20
2 6 5 3 6 8 9
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x; cin >> n>> x; vector<int> a(n);
for(int i=0; i<n; i++) cin >> a[i];

int res=0, sum=0;
for(int l=0, r=0; r<n; r++) {
    sum+=a[r];
    while(sum>x) {
        sum-=a[l];
        l++;
    }
    res=max(res, r-l+1);
}
cout << res;
return 0;
}