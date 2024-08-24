#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
const int MOD = 1e9 + 7;
/*
BÀI A: SỐ LẬP PHƯƠNG
TIME LIMIT: 1 giây
Cho một xâu S gồm các chữ số và có thể có các dấu chấm hỏi “?”. Mỗi dấu chấm hỏi hãy thay
thế bằng một chữ số từ 1 đến 9 sao cho S trở thành một số lập phương nhỏ nhất có thể.
Lưu ý: trong bài này ta chỉ xem xét số lập phương của một số nguyên.
Input
Một dòng duy nhất chứa xâu S độ dài không quá 18. Input đảm bảo ký tự ngoài cùng bên trái
luôn là chữ số khác 0.
Output
Xuất ra một số lập phương nhỏ nhất khớp với xâu S đã cho. Trong trường hợp không tồn tại số
lập phương nào thỏa mãn, hãy xuất “NO ANSWER”
Ví dụ:
Giải thích: 1728 = 123
Giải thích: 1881365963625 = 123453
input output
1??8 1728
input output
18813????3625 1881365963625
input output
1??2 NO ANSWER
*/

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; cin >> s;
bool check=false;
unsigned ll t;

for(ll i=1; i<=2200000; i++) {
    t=i;
    t=t*t*t;
    int d=s.size()-1;
    check=true;
    while(d>=0) {
        if(s[d]!='?' && t%10!=(s[d]-48)) check=false;
        if(s[d]=='?' && t%10==0) check=false;
        d--; t/=10;
        if(d<0 && t>0) {
            check=0; break;
    }
        if(t==0 && d>=0) {
            check=0; break;
        }
    }
    if(check) {
        t=i;
        cout << t*t*t;
        return 0;
    }
}

cout << "NO ANSWER";
return 0;
}