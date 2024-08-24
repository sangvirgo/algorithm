#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Cho  loại đồng xu và giá tiền của mỗi loại là các số nguyên , và số nguyên dương . Tìm số đồng xu nhỏ nhất để tổng giá trị của chúng bằng  (số lượng đồng xu không giới hạn), nếu không tồn tại một số đồng xu có tổng là  thì in ra .
Điều kiện:  và .

Input

3 11 
1 3 5
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, s; cin >> n>> s;
vector<int> coins(n);
for(int i = 0; i < n; i++) cin >> coins[i];

vector<int> dp(s + 1, -1);
dp[0] = 0;

for(int i=1; i<=s; i++) {
    for(int j=1; j<=n; j++) {
        if(i>=coins[j] && dp[i-coins[j]]!=-1) {
            if(dp[i]==-1) dp[i]=dp[i-coins[j]]+1;
            else dp[i]=min(dp[i], dp[i-coins[j]]+1);
        }
    }
}
cout << dp[s] << endl;
return 0;
}