#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Đề bài:

Cho trước một số tiền và tập đồng xu.
Hãy tìm cách đổi tiền sao cho số đồng xu là ít nhất.

6 72
1 2 5 10 20 50
*/
int main() {
int n, t; cin >> n >> t;
vector<int> coins(n+1);
for(int i=1; i<=n; i++) {
    cin >> coins[i];
}
sort(coins.begin()+1, coins.end(), greater<int>());

int res=0;
for(int i=1; i<=n; i++) {
    if(t>=coins[i]) {
        cout << coins[i];
        t-=coins[i];
        res++;
    }
}

if(t==0) cout << res;
else cout << -1;
return 0;
}