#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
const int MOD = 1e9 + 7;
/*
BÀI 7E - PHẦN TỬ CHUNG

Cho K dãy số nguyên, các số trong dãy thuộc [-109…109]. Hãy viết chương trình tìm số xuất hiện trong cả K dãy.

Nếu không có số nào xuất hiện trong cả K dãy thì in ra “NO”, còn nếu có nhiều số cùng xuất hiện trong K dãy thì ghi số nhỏ nhất tìm được.

Input:

Dòng đầu tiên là số nguyên K (1 ≤ K ≤ 100000).

Dòng thứ hai gồm K số nguyên mô tả độ dài của từng dãy số. Tổng độ dài của tất cả dãy số không vượt quá 500000.

K dòng tiếp theo, mỗi dòng mô tả một dãy số.

Output:

Ghi ra phần tử chung nhỏ nhất tìm được, in ra “NO” trong trường hợp ngược lại.

Test ví dụ:

Input

Ouput

2

3 4

1 2 3

4 3 2 -1

2

3

5 6 7

2 1 3 4 3

4 5 -1 0 0 3

11 4 7 8 9 0 3

3

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int k; cin >> k;
vector<int> a(k+1);
for(int i=0; i<k; i++) cin >> a[i];

map<ll, int> m;
set<ll> s;
for(int i=0; i<k; i++) {
    vector<ll> b(a[i]);
    set<ll> temp;
    for(int j=0; j<a[i]; j++) cin >> b[j], s.insert(b[j]), temp.insert(b[j]);
    for(ll it: temp) m[it]++;
}

for(ll x: s) {
    if(m[x] == k) {
        cout << x;
        return 0;
    }
}
return 0;
}