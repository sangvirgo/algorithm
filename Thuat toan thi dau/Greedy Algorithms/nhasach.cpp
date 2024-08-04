#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Tham lam là cách giải quyết vấn đề mà ta tìm ra một cách để tạo ra kết quả tốt nhất 

Bài toán:
Trong nhà sách đang bán một bộ sách gồm n cuốn sách, mỗi cuốn sách có giá là a[i]. Nhà sách đang có ưu đãi là mua 3 cuốn giảm giá thì miễn phí cho quyển sách rẻ nhất trong 3 cuốn đấy. Tìm chi phí thấp nhất để mua hết n cuốn sách.

Ví dụ:
7
5 3 6 9 1 2 2

Đáp án:
21
*/
int n, a[1005], ans=0;

int main() {
cin >>n; 
for(int i=1; i<=n; i++) {
    cin >> a[i];
}
sort(a+1, a+n+1, greater<int>());

for(int i=1; i<=n; i++) {
    cout << a[i] << " ";
}

cout << endl;

for(int i=1; i<=n; i++) {
    if(i%3==0) continue;
    ans+=a[i];
}
cout << ans;
return 0;
}