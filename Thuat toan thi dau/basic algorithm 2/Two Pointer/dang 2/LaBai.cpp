#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://oj.vnoi.info/problem/ndccard

7 20
2 6 5 3 6 8 9
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x; cin >> n >> x; vector<int> arr(n+1);
for(int i=0; i<n; i++) {
    cin >> arr[i];
}

int res=0, sum=0;

for(int l=0, r=0; r<n; r++) {
    sum+=arr[r];
    while(sum>x) {
        sum-=arr[l];
        l++;
    }
    res=max(res, r-l+1);
}

cout << res;
return 0;
}