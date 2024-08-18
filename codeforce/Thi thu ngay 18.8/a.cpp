#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 5A - SWAP KÍ TỰ

Cho hai xâu S và T có độ dài bằng nhau và chỉ chứa các kí tự thường. Bạn được phép thực hiện thao tác sau với số lượt tùy ý: mỗi lượt, chọn 2 kí tự X và Y, rồi thay thế tất cả các kí tự X trong xâu S thành Y, còn kí tự Y sẽ đổi ngược lại thành kí tự X.

Nhiêm vụ của bạn là hãy xác định xem có thể thu được xâu T bằng cách biến đổi xâu S như vậy không?

Input:

Gồm 2 dòng, dòng đầu chứa xâu S, dòng thứ hai chứa xâu T (1 ≤ |S|, |T| ≤ 2 × 105).

Output: 

In ra “Yes” nếu có thể biến đổi được, in ra “No” trong trường hợp ngược lại.

Test ví dụ:

Input:

Output

balloon

barrnno

Yes

aaa

xxy

No

abcd

efgh

Yes

 

Giải thích test 1:

Chọn (X, Y) = (l, r), ta được xâu barroon.

Chọn (X, Y) = (o, n), ta được xâu barrnno.
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s, t; cin >> s >> t;

map<char, char> mapS, mapT;

for(int i=0; i<s.size(); i++ ) {
    char charS=s[i];
    char charT=t[i];

    if(mapS.count(charS) && mapS[charS]!= charT) {
        cout << "No";
        return 0;
    }
    if(mapT.count(charT) && mapT[charT]!= charS) {
        cout << "No";
        return 0;
    }
    mapS[charS]=charT;
    mapT[charT]=charS;
}
cout << "Yes";
return 0;
}