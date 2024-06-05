#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
(3 điểm) Viết hàm nhận tham số là số nguyên dương n (n>0). Hàm thực
hiện loại bỏ 1 số trong n sao cho giá trị các số còn lại trong n là nhỏ nhất.

Ví dụ: n = 21  bỏ số 2  n = 1
n = 132  bỏ số 3  n = 12
n = 104  bỏ số 1  n = 4
n = 23198  bỏ số 3  n = 2198

Gợi ý: lần lượt xét từng cặp số từ trái sang phải, khi số đi trước lớn hơn số đi

sau thì loại bỏ số đi trước.
*/

void removeNumber(int n) {
    int start=n;
    string num=to_string(n);
    int maxValue=INT_MAX;
    int numDelete;
    for(int i=0; i<num.length(); i++) {
        string temp=num;
        temp.erase(i, 1);
        if(stoi(temp)<maxValue) {
            maxValue=stoi(temp);
            numDelete=stoi(string(1, num[i]));
        } 
    }
    cout << "So ban dau: " << start<< endl;
    cout << "So can xoa: " << numDelete<< endl;
    cout << "So nho nhat: " << maxValue << endl;
}

int main() {
removeNumber(21);
removeNumber(132);
removeNumber(104);
removeNumber(23198);
return 0;
}