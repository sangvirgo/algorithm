#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Cho xâu S
 độ dài không quá 20 và chỉ chứa các kí tự số. Đếm xem có bao nhiêu vị trí xuất hiện số 2022
Input
Một dòng duy nhất chứa xâu S
Output
Kết quả

Example
inputCopy
120223520229
outputCopy
2

*/
int count2022(string s) {
    int count=0;
    for(int i=0; i<s.length(); i++) {
        if(s.substr(i, 4)=="2022") count++;
    }
    return count;
}


int main() {
string s;
getline(cin, s);
cout << count2022(s);
return 0;
}