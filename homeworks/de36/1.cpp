#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
(3 điểm) Viết chương trình minh họa cho những số <100 về
giả thuyết của nhà toán học người Đức - Christian Goldbach
(1690-1764, trong một bức thư ngày 07/6/1742 gửi cho nhà toán
học tài ba Leonhard Euler): mọi số tự nhiên chẵn lớn hơn 2 đều
có thể viết được thành tổng của hai số nguyên tố (giả thuyết này
đã được chỉ ra là đúng tới 4 × 1018).

Ví dụ 4 = 2 + 2, 8 = 5 + 3, 20 = 13 + 7
*/
vector<int> numPrimee(100, 1);

void isPrimee() {
    numPrimee[0]=numPrimee[1]=0;
    for(int i=2; i<=sqrt(100); i++) {
        if(numPrimee[i]) {
            for(int j=i*i; j<=100; j+=i) {
                numPrimee[j]=0;
            }
        }
    }
}

void goldBach() {
    for(int i=4; i<100; i+=2) {
        for(int j=2; j<i; j++) {
            if(numPrimee[j] && numPrimee[i-j]) {
                cout << i << "=" << j << "+" << i-j<< endl;
            }
        }
    }
}

int main() {
isPrimee();
for(int i=0; i<=100; i++) {
    if(numPrimee[i]) cout << i << " ";
}
cout << endl;

goldBach();
return 0;
}