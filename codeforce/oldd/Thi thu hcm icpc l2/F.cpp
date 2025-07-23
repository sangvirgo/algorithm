#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI J: NHẬP MÔN LẬP TRÌNH
Cho mảng A chứa N số nguyên dương. Bạn cần sắp xếp lại mảng A sao cho tất cả các số lẻ nằm
ở đầu mảng và chúng giảm dần, tất cả số chẵn nằm ở cuối mảng và chúng tăng dần.
Input
Dòng đầu tiên chứa số nguyên dương N ≤ 20;
Dòng thứ hai chứa N số nguyên dương phân biệt 𝐴1, 𝐴2, … , 𝐴𝑁 (1≤ 𝐴𝑖 ≤ 100)
Output
Xuất ra một dòng chứa N phần tử của mảng A sau khi sắp xếp theo yêu cần đề bài
input output
5
1 2 3 4 5
5 3 1 2 4
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<int> a(n);
int cntEven = 0, cntOdd = 0;
for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) cntEven++;
    else cntOdd++;
}
vector<int> odd(cntOdd), even(cntEven);

int i = 0, j = 0;
for (int x : a) {
    if (x % 2 == 0) even[j++] = x;
    else odd[i++] = x;
}

sort(odd.begin(), odd.end(), greater<int>());
sort(even.begin(), even.end());

for(int x: odd) cout << x << " ";
for(int x: even) cout << x << " ";
return 0;
}