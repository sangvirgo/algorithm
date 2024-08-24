#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Bài D: Replace
TIME LIMIT: 1 giây
Cho một đoạn văn gồm nhiều từ, mỗi từ được ngăn cách bởi 1 dấu khoảng trắng. Hãy thay thế tất
cả khoảng trắng bằng dấu gạch ngang ‘-’
Input
Một dòng duy nhất chứa một xâu tối đa 100 ký tự, gồm chữ cái latin in thường và khoảng trắng.
Output
Xuất ra xâu như Input sau khi thay thế khoảng trắng bằng dấu gạch ‘-’
Ví dụ:
input output
chao mung den voi hcmptit icpc chao-mung-den-voi-hcmptit-icpc
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; getline(cin, s);
for(int i=0; i<s.size(); i++) {
    if(s[i] ==' ') cout << '-';
    else cout << s[i];
}
return 0;
}