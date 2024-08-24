#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Viết chương trình nhập vào ba số nguyên dương A, B, C. Xuất ra số nhỏ nhất chia hết
cho 3 số trên
Input
Dòng đầu tiên chứa A, B, C ( A, B, C ≤ 100)
Output
Xuất ra số nhỏ nhất chia hết cho cả A, B,
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int a, b, c; cin >> a >> b >> c;
int res=a*b*c;
for(int i=1; i<=res; i++) {
    if(i%a==0 && i%b==0 && i%c==0) {
        cout << i; break;
    }
}
return 0;
}