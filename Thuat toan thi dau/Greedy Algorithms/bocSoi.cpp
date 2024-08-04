#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Bóc sỏi

Bạn sẽ tham gia một trò chơi. Nhiệm vụ của bạn sẽ chiến thắng máy. Với mỗi trận đấu sẽ có n viên sỏi, bạn được bóc ra 1, 2, 3,...m viên sỏi. Mỗi người bóc 1 lần rồi đến người kia. Đầu vào đưa bạn 2 số n, m. Bạn được đi trước và kiểm tra xem bạn có luôn luôn chiến thắng được không?
*/
int main() {
int n, m; cin >> n >> m;
if(n%(m+1)!=0) cout << "yes";
else cout << "no";
return 0;
}