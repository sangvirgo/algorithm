#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
/*
Bạn được cho một dãy số theo công thức sau:

-Phần tử thứ i bằng 1 nếu i<=3

-Ngược lại, Phần tử thứ i bằng tổng 3 phần tử liền trước

Một số phần tử đầu tiên của dãy: 1, 1, 1, 3, 5, 9,...

Yêu cầu tìm phần thử thứ N

Input
Một dòng duy nhất chứa N (1<=N<=10^6)

Output
Kết quả có thể rất lớn vì thế xuất ra kết quả sau khi chia dư cho 1000000007.
*/
long long tribonacci(int n) {
    if(n<=3) return 1;
    if(n==4) return 3;
    if(n==5) return 5;
    if(n==6) return 9; 
    long long trib1=3, trib2=5, trib3=9;
    long long temp;
    for(int i=7; i<=n; i++) {
        temp=trib3;
        trib3=(trib1+trib2+temp)%MOD;
        trib1=trib2;
        trib2=temp;
    }
    return trib3;
}


int main() {
int x; cin >> x;
long long n= tribonacci(x);
cout << n;
return 0;
}