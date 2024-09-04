#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
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

fbdcea

aabcde

2

2 2

aabcde

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s; cin >> s;
int n; cin >> n;
map<int, int> mp;
vector<int> a(n+1);

for(int i=0; i<n; i++) cin >> a[i];

for(int i=0; i<n; i++) {
    mp[a[i]-1]++;
}

int sum=0;
for(int i=0; i<s.length()/2; i++) {
    sum+=mp[i];
    if(sum&1){
        swap(s[i], s[s.length()-i-1]);
    }
}

cout   << s;
return 0;
}