#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Đếm mèo
Cho xâu ký tự s, chỉ bao gồm các ký tự ‘a’, ‘c’ hoặc ‘t’.
Yêu cầu: hãy sắp xếp lại xâu s sao cho “cat” xuất hiện nhiều nhất có thể
Input: Xâu s có không quá 1000 ký tự.
Output: Số lần xuất hiện nhiều nhất của “cat” sau khi sắp xếp lại xâu s.
Ví dụ:
Input Output
ccattatcaat 3
Giải thích: ccattatcaat => catcatcatat (“cat” xuất hiện 3 lần)
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; cin >> s;
int cntT=0, cntC=0, cntA=0;
for(int i=0; i<s.size(); i++) {
    if(s[i] == 'c') cntC++;
    else if(s[i] == 'a') cntA++;
    else if(s[i] == 't') cntT++;
}

int res = min(cntC, min(cntA, cntT));
cout << res;
return 0;
}