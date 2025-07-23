#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
Cho dãy số A[] có N phần tử. Mỗi bước biến đổi, bạn cần thực hiện một trong hai loại thao tác sau lên các phần tử A[i]: (1) nhân A[i] với 3, hoặc (2) lấy A[i] chia cho 2.

Phép chia được thực hiện khi và chỉ khi A[i] là một số chẵn. Tại mỗi bước, không được phép thực hiện duy nhất thao tác (1) lên cả N phần tử.

Nhiệm vụ của bạn là hãy xác định xem số lượng bước biến đổi có thể được thực hiện lớn nhất bằng bao nhiêu?

Input:

Dòng đầu tiên là số nguyên dương N (1 ≤ N ≤ 10000).

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109).

Output: 

In ra đáp án là mức năng lượng tìm được.

Test ví dụ:

Input

Output

3

5 2 4

3

 

4

1 3 5 7

0

6

242 192 333 169 256 192

21

 

Giải thích test 1:

Bước 1: Nhân A[1] với 3, nhân A[2] với 3, chia A[3] cho 2 à {15, 6, 2}

Bước 2: Nhân A[1] với 3, chia A[2] cho 2, nhân A[3] với 2 à {45, 3, 6}

Bước 3: Nhân A[1] với 3, nhân A[2] với 3, chia A[3] cho 2 à {135, 9, 3}
*/
int countDivideByTwo(int a) {
    int count=0;
    while(!(a&1)) {
        a/=2;
        count++;
    }
    return count;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n; cin >> n;
vector<int> arr(n);
int even=0;

for(int i=0; i<n; i++) {
    cin >> arr[i];
}

for(int i=0; i<n; i++) {
    even+=countDivideByTwo(arr[i]);
}

cout << even ;
return 0;
}