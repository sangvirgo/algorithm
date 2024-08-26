#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 6F - DÃY FIBONACCI TUẦN HOÀN

Dãy số Fibonaci được định nghĩa như sau: 

T(0) = 0, T(1) = 1
T(n) = T(n–1) + T(n–2), với n > 1.
Như vậy, các số đầu tiên của dãy sẽ là: 0  1  1  2  3  5  8  13  21  34 …

Bây giờ ta thay đổi biểu diễn của dãy bằng cách chia lấy phần dư các số trong dãy cho một số B cho trước. Khi đó người ta nhận thấy các biểu diễn của dãy số Fibonaci thành một dãy mới và dãy này sẽ gồm các đoạn lặp đi lặp lại. Ví dụ với B = 2, 3, 4, 5 ta có bảng sau:

Số B

Dãy Fibonaci khi đã chia lấy phần dư với B

Độ dài đoạn lặp ngắn nhất

2

0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0 1 1 0 1

3

3

0 1 1 2 0 2 2 1 0 1 1 2 0 2 2 1 0 1 1 2 0 2 2

8

4

0 1 1 2 3 1 0 1 1 2 3 1 0 1 1 2 3 1 0 1 1 2 3

6

5

0 1 1 2 3 0 3 3 1 4 0 4 4 3 2 0 2 2 4 1 0 1 1

20

 

Cho trước số nguyên B. Hãy xác định chu kì tuần hoàn nhỏ nhất tìm được.

Input:

Dòng đầu tiên là số lượng bộ test T (1 ≤ T ≤ 50).

Mỗi test gồm một số nguyên B (2 ≤ B ≤ 224).

Output:

In ra một số nguyên duy nhất là đáp số của bài toán.

Test ví dụ:

Input

Output

6

2

3

4

5

6

16777216

3

8

6

20

24

25165824

 


Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb


4
2
3
4
5


*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
vector<ll> a(t);
for(int i = 0; i < t; i++) {
    cin >> a[i];
}

vector<int> fibo(100000000);
fibo[0] = 0;
fibo[1] = 1;
for(int i=0; i<t; i++) {
    ll b = a[i]%MOD;
    for(int j=2; j<=b*b; j++) {
        fibo[j] = (fibo[j-1] + fibo[j-2]) % b;
        if(fibo[j] == 0 && fibo[j-1] == 1) {
            cout << j << endl;
            break;
        }
    }
}
return 0;
}