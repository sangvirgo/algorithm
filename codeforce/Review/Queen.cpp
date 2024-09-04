#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 1C: BÀI TOÁN N QUÂN HẬU

Hãy đếm số cách xếp N quân hậu lên bàn cờ N x N sao cho không có 2 quân hậu nào xung đột với nhau?

Input: 

Một số nguyên N duy nhất (4 <= N <= 14).

Output: 

In ra số cách xếp quân hậu.

 

Test ví dụ:

Input:

Output:

4

 

2

8

 

92

Giới hạn thời gian: 3s

Giới hạn bộ nhớ: 524288 Kb
*/
int n, cnt=0; 
vector<int> isInDiag1, isInDiag2, check;
void Try(int i) {
    for(int j=1; j<=n; j++) {
        if(check[j] && isInDiag1[i-j+n] && isInDiag2[i+j-1]) {
            check[j]=isInDiag1[i-j+n]=isInDiag2[i+j-1]=0;
            if(n==i) cnt++;
            else Try(i+1);
            check[j]=isInDiag1[i-j+n]=isInDiag2[i+j-1]=1;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >> n;
isInDiag1.resize(2*n+1, 1);
isInDiag2.resize(2*n+1, 1);
check.resize(n+1, 1);
Try(1);
cout << cnt;
return 0;
}