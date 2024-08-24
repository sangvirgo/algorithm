#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho dãy số nguyên dương . Tìm độ dài của dãy con không giảm dài nhất của dãy.
Dãy con của một dãy là dãy số thu được bằng cách bỏ đi một số phần tử của dãy ban đầu.
Điều kiện:  và .


10 
2 4 6 1 2 3 4 5 6 7
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<int> a(n), dp(n, 1);
for(int i = 0; i < n; i++) cin >> a[i];

for(int i=1; i<n; i++) {
    for(int j=0; j<i; j++) {
        if(a[i]>=a[j]) dp[i]=max(dp[i], dp[j]+1);
    }
}

int maxLen = dp[0];
for(int i=1; i<n; i++) maxLen=max(maxLen, dp[i]);

cout << maxLen << endl;
return 0;
}