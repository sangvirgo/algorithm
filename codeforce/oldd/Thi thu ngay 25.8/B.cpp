#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 6B - XÂU AC

Cho một xâu AC được xây dựng một cách đệ quy vô hạn như sau:

Xâu S(0) là xâu đơn có 3 kí tự ACC. Xâu S(k) được xây dựng bằng công thức:

S(k) = S(k-1) + AC..C + S(k-1), trong đó xâu ở giữa AC..C có k+2 kí tự C.

S(0) = ACC;

S(1) = ACCACCCACC

S(2) = ACCACCCACCACCCCACCACCCACC

………

Với cách này sẽ xây dựng một xâu với 2 kí tự A, C có độ dài vô hạn. Nhiệm vụ của bạn là hãy xác định xem kí tự thứ N là kí tự nào?

Input

Gồm một số nguyên N duy nhất (1 ≤ N ≤ 109).

Output

In ra kí tự thứ N tìm được.

Test ví dụ:          

Input

Output

11

a

1

a

3

c


*/
ll findLenS(ll n) {
    if(n==0) return 3;
    return 2*findLenS(n-1)+(n+2)+1;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
ll k=0;
while(findLenS(k)<n) k++;
if(k==0) {
    string s="acc";
    cout << s[n-1];
}

vector<string> s(k+1);
s[0]="acc";

for(int i=1; i<=k; i++) {
    s[i]=s[i-1]+"a";
    for(int j=0; j<i+2; j++) s[i]+="c";
    s[i]+=s[i-1];
}

cout << k << endl;
cout << s[k] << endl;
cout << s[k][n-1] << endl;
return 0;
}


/*
ACCACCCACCACCCCACCACCCACC
accacccaccaccccaccacccacc
accaccccaccacccccaccaccccacc
accaccccaccacccccaccaccccacc
*/