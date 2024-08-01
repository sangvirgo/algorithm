#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/translate/he/Number-Theory-5
*/

int countPartitions(int n, int k, vector<vector<int>>& dp) {
    if(n==0) return 1;
    if(k==0) return 0;
    if(dp[n][k]!=-1) return dp[n][k];

    if(n>=k) {
        dp[n][k]=countPartitions(n-k, k, dp)+countPartitions(n, k-1, dp);
    } else {
        dp[n][k]=countPartitions(n, k-1, dp);
    }

    return dp[n][k];
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n; cin >> n;

vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
cout << countPartitions(n, n, dp);

return 0;
}