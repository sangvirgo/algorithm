#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/P181PROH/
*/
int main() {
unsigned long int a, b; cin >> a >> b;
if(b>a) {
    cout << "0";
    return 0;
} 
if(b==a) {
    cout << "infinity";
    return 0;
}
int cnt=0;
unsigned long int diff=a-b;

for(unsigned long int i=1; i*i<=diff; i++) {
    if(diff%i==0) {
        if (i > b) {
            cnt++;
        }
        if (i != diff / i && diff / i > b) {
            cnt++;
        }
    }
}
cout << cnt;
return 0;
}


/*
Phân tích chi tiết:
Kiểm tra điều kiện đặc biệt:

𝑏
>
𝑎
b>a: không đúng (2 không lớn hơn 11).
𝑏
=
=
𝑎
b==a: không đúng (2 không bằng 11).
Tính hiệu số:

𝑑
𝑖
𝑓
𝑓
=
𝑎
−
𝑏
=
11
−
2
=
9
diff=a−b=11−2=9.
Tìm các ước của 9 và đếm những ước thỏa mãn điều kiện 
𝑖
>
𝑏
i>b:

Các ước của 9 là 1, 3, và 9.
Duyệt từ 1 đến 
9
9
​
 :

𝑖
=
1
i=1:
9
%
1
=
0
9%1=0, nên 1 là ước của 9.
Kiểm tra 
1
>
2
1>2: sai, không đếm.
9
/
1
=
9
9/1=9 (ước khác của 9).
Kiểm tra 
9
>
2
9>2: đúng, đếm.
𝑖
=
2
i=2:
9
%
2
≠
0
9%2

=0, nên 2 không phải là ước của 9.
𝑖
=
3
i=3:
9
%
3
=
0
9%3=0, nên 3 là ước của 9.
Kiểm tra 
3
>
2
3>2: đúng, đếm.
9
/
3
=
3
9/3=3 (ước khác của 9), nhưng đã tính ở trên.
Kết quả:

Có 2 giá trị 
𝑥
x thỏa mãn: 3 và 9.
*/