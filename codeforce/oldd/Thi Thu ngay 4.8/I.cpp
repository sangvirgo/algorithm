#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
const int MOD = 1e9 + 7;
/*
Giả thuyết Goldbach do nhà toán học người Đức Christian Goldbach (1690-1764) nêu ra vào năm 1742 trong một lá thư gửi tới Leonhard Euler, là một trong những bài toán lâu đời và nổi tiếng còn chưa giải được trong lý thuyết số nói riêng và toán học nói chung. Giả thuyết phỏng đoán rằng: Mọi số tự nhiên chẵn lớn hơn 2 có thể biểu diễn bằng tổng của hai số nguyên tố. Trong bài toán này bạn được cho một số tự nhiên chẵn ru0d6Jg+wC82P9+ATOHhBcdAM71AAAAAElFTkSuQmCC, bạn hãy đếm số lượng cặp số nguyên tố DG6LHObmtdcAAAAASUVORK5CYII= mà LwzlQQQxcSAAAAAElFTkSuQmCC.

Input

Chỉ có một số tự nhiên chẵn 9b+DxJE8bdVh0AuAAAAAElFTkSuQmCC

Output

Ghi ra số lượng cặp số nguyên tố eKaEsPWXF3TQawJ1bnMf98UAcBbXE0aZgdWxwLBgSFK5VoawbhuweFt2HydmTw4QdopwMOe9GfPTX+B+CU0F0Op9fKQAAAABJRU5ErkJggg== mà uvN7DC4xTb9YvZJSBAAAAAElFTkSuQmCC và xgAAAABJRU5ErkJggg==.

Ví dụ:

Input

Output

10

2
*/
vector<bool> isPrimee(MAX, true);
void Eratosthenes(int n) {
    for(int i=2; i*i<=n; i++) {
        if(isPrimee[i]) {
            for(int j=i*i; j<=n; j+=i) {
                isPrimee[j]=false;
            }
        }
    }
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


int n; cin >>n;
if(n&1 || n<=3) {
    cout << 0;
    return 0;
}

Eratosthenes(n);
int cnt=0;
for(int i=2; i<=n/2; i++) {
    if(isPrimee[i] && isPrimee[n-i]) {
        cnt++;
    } 
}

cout << cnt;


return 0;
}