#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
ho một dãy nhị phân có n
 phần tử chỉ gồm các số 0 và 1. Tìm cách chia dãy đã cho thành các dãy con ít nhất thỏa mãn điều kiện sau:

- Tồn tại một cách sắp xếp các dãy con này thành một hàng sao cho chúng tạo thành một dãy nhị phân không giảm.

Ví dụ: với dãy 11010
 ta sẽ chia thành các dãy con: 11
, 01
, 0
 và sau khi sắp xếp lại 3 dãy con này ta được dãy không giảm như sau: 00111
.

Yêu cầu: Cho q
 truy vấn, với mỗi truy vấn bạn được cho dãy n
 như mô tả trên. Tìm ra số lượng dãy con ít nhất thỏa mãn yêu cầu đề bài.

Input
Dòng đầu tiên là số nguyên dương q
 (1≤q≤500)
 là số truy vấn.

q
 dòng tiếp theo, mỗi dòng là một dãy nhị phân độ dài từ 1 đến 500.

Output
In ra q
 dòng ứng với q
 truy vấn, mỗi dòng là một số nguyên duy nhất là số dãy con ít nhất ta cần chia ra.
*/
void chiaDay(string& s) {
    int lens=s.size();
    int cnt=1;
    int l=0, r=lens-1;
    while(l<r) {
        while(s[l]!='1') l++;
        while(s[r]!='0') r--;
        if(l<r) {
            swap(s[l], s[r]);
            l++;
            r--;
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
int t; cin >> t;
while(t--) {
    int x; cin >> x;
    string s=to_string(x);
    chiaDay(s);
}
return 0;
}