#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
long long ncr[5005][5005];
/*
Sử dụng công thức truy hồi:
    nCr = (n-1)Cr + (n-1)C(r-1)

ta dễ dàng khởi tạo tất cả các giá trị nCr trong O(N^2).

Code có thể chạy được với n <= 5000 và mod bất kỳ (không cần nguyên tố).


Có bao nhiêu cách để đi từ góc trái trên của một bảng m*n ô đến góc phải dưới của ô đó, nếu ta chỉ được phép đi về bên phải hoặc đi xuống dưới. Ta thấy mọi đường đi hợp lệ có  bước, và hai đường đi khác nhau nếu và chỉ nếu chúng có một bước đi xuống dưới khác nhau, vậy ta có  cách đi.

Tính hệ số nhị thức có thể gây tràn số ở các bước trung gian, vì vậy ta nên tính hệ số nhị thức bằng công thức: 
*/
void precompute() {
    int k;
    for(int i=0; i<5001; i++) {
        ncr[i][0] = ncr[i][i] = 1;
        k=i>>1;
        for(int j=1; j<k+1; j++) {
            ncr[i][j]=ncr[i][i-j]=(ncr[i-1][j]+ncr[i-1][j-1])%MOD;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

    clock_t start, end;
    start=clock();

    precompute();
    cout << ncr[2][2] << endl;

    end=clock();
    double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
return 0;
}
/*
Tại sao lại dùng MOD = 10^9 + 7?
Nguyên tố lớn: 1000000007 là một số nguyên tố lớn, điều này có một số lợi ích:

Giúp tránh xung đột trong quá trình tính toán số dư (modulo) vì số nguyên tố lớn này không thể chia đều cho bất kỳ số nhỏ nào ngoài 1 và chính nó.
Khi làm việc với số nguyên tố lớn, ta có thể tận dụng tính chất của các số nguyên tố trong một số thuật toán như tính toán nghịch đảo modulo.
Tránh tràn số:

Trong các bài toán liên quan đến tổ hợp, giá trị của các hệ số nhị thức (binomial coefficients) có thể rất lớn và dễ gây ra tràn số khi tính toán trên các hệ thống máy tính thông thường.
Để tránh tràn số, chúng ta thường lấy modulo một số nguyên tố lớn. Điều này đảm bảo rằng các giá trị trung gian luôn nhỏ hơn MOD và do đó không gây tràn số.
Việc sử dụng modulo giúp giữ các giá trị trong phạm vi của kiểu dữ liệu mà ta sử dụng (trong trường hợp này là long long).
Hiệu suất tốt:

Việc chọn 10^9 + 7 là một tiêu chuẩn phổ biến trong các bài toán lập trình vì nó là một số đủ lớn để đảm bảo tính chính xác trong các phép toán, nhưng cũng đủ nhỏ để các phép toán modulo thực hiện hiệu quả trên hầu hết các hệ thống máy tính.
*/