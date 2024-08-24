#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10010
const int MOD = 1e9 + 7;
/*
Có  cuộc họp, cuộc họp thứ  bắt đầu vào thời điểm  và kết thúc ở thời điểm . Do chỉ có một phòng hội thảo nên 2 cuộc họp bất kì sẽ được cùng bố trí phục vụ nếu khoảng thời gian làm việc của chúng chỉ giao nhau tại đầu mút hoặc không giao nhau. Hãy bố trí phòng họp để phục vụ được nhiều cuộc họp nhất.
Điều kiện:  và  với mọi .
Input: Số nguyên  và  dòng tiếp theo có dòng thứ  là thời điểm bắt đầu  và kết thúc  của cuộc họp thứ .
Output: một dòng gồm số thứ tự ban đầu của các cuộc họp được bố trí, theo thứ tự thời gian.


4
1 3
4 6
2 5
7 8
*/

class Meeting {
public:
    Meeting(int a=1, int b=1, int c=1) : start(a), end(b), index(c) {};
    int start, end, index;
};

bool compare(Meeting& a, Meeting& b) {
    return a.start<b.start || (a.start==b.start && a.end<b.end);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<Meeting> a; 
vector<int> dp(MAX), f(MAX, -1);

for(int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    a.push_back(Meeting(x, y, i+1));
}

sort(a.begin(), a.end(), compare);

// dp
for(int i=0; i<n; i++) {
    dp[i]=1;
    for(int j=0; j<i; j++) {
        if(a[j].end<=a[i].start && dp[i]<dp[j]+1) {
            dp[i]=dp[j]+1; // Cập nhật số lượng cuộc họp tối đa có thể chọn
            f[i]=j;// Lưu lại chỉ số của cuộc họp trước đó
        }
    }
}

int res=0;
for(int i=0; i<n; i++) {
    if(dp[i]>dp[res]) res=i;
}

vector<int> ans;
while(res!=-1) {
    ans.push_back(a[res].index);
    res=f[res];
}

reverse(ans.begin(), ans.end());
for(auto x: ans) cout << x << " ";
return 0; 
}