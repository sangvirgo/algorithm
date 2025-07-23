#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI: SẮP XẾP XÂU
Viết chương trình nhập N xâu, hãy sắp xếp các xâu theo thứ tự từ điển.
Input
Dòng đầu tiên chứa N (1 ≤ N ≤ 100)
N dòng tiếp theo, mỗi dòng là một xâu chỉ chứa các kí tự Latin in hoa độ dài không
quá 100.
Output
Xuất ra N dòng gồm các xâu theo thứ tự từ điển
Ví dụ:
Input: Output:
7
ICPC
PTIT
PTI
PZ
P
PTIT
MEOMEO
ICPC
MEOMEO
P
PTI
PTIT
PTIT
PZ
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<string> a(n);
for(int i=0; i<n; i++) cin >> a[i];

sort(a.begin(), a.end());
for(int i=0; i<n; i++) cout << a[i] << endl;
return 0;
}