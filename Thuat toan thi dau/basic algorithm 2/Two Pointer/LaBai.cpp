#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://oj.vnoi.info/problem/ndccard
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x; cin >> n >> x; vector<int> arr(n+1);
for(int i=1; i<=n; i++) {
    cin >> arr[i];
}

sort(arr.begin(), arr.end());
int result=0;

for(int i=1; i<=n-2; i++) {
    int l=i+1, r=n;
    while(l<r) {
        int temp=arr[i]+arr[l]+arr[r];
        if(temp==x) {
            cout << x; 
            return 0;
        } else if(temp<x) {
            result=max(result, temp);
            l++;
        } else r--;
    }
}

cout << result;
return 0;
}