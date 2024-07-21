#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
BÀI 1A: ĐỔI CHỖ

Cho một chuỗi kí tự, các kí tự được đánh số từ 1 đến |s| với |s| là chiều dài của chuỗi.

Có M phép đổi chỗ, với mỗi 1 phép đổi chỗ, chúng ta lựa chọn 1 số ai (1 ≤ 2 * ai  ≤ |s|)  rồi thực hiện đảo ngược xâu từ vị trí ai đến |s| - ai + 1.

Hãy cho biết kết quả xâu s sau M phép biến đổi.

Input:

Dòng đầu tiên xâu s (2 ≤ |s| ≤ 2 * 105), chỉ gồm các ký tự là các chữ cái.

Dòng thứ 2 gồm số nguyên dương M (1 ≤ M ≤ 105) – số phép biển đổi.

Dòng tiếp theo bao gồm M số nguyên dương ai.

Output:

Hãy in ra xâu s thu được.

 

Test ví dụ:

Input

Ouput

abcdef

3

1 2 3

aedcbf

aabcde

2

2 2

aabcde

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb



abcdef

3

1 2 3

abcdef 
1
2
*/


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; cin >> s;
vector<int> f(s.length()+1, 0);
int t; cin >> t;

while(t--) {
    int x; cin >> x;
    f[x-1]++; f[s.length()-x]--;   
}

int sum=0;
for(int i=0; i<s.length()/2; i++) {
    sum+=f[i];
    if(sum%2!=0) {
        swap(s[i], s[s.length()-1-i]);
    }
}

cout << s;
return 0;
}