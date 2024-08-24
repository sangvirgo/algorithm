#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI: CẶP SỐ VER1
Viết chương trình nhập vào mảng A chứa N số nguyên dương và một số nguyên
dương K. Kiểm tra xem có tồn tại cặp số (i, j) sao cho 𝐴𝑖 + 𝐴𝑗 = K hay không.
Input
Dòng đầu tiên chứa N, K (1 ≤ N ≤ 100 và K ≤ 100)
Dòng thứ hai chứa N phần tử của mảng A. Các phần tử có giá trị không quá 100.
Output
Xuất ra “YES” hoặc “NO” (YES NO viết in hoa)
Ví dụ:
Input: Output:
5 30
12 19 10 3 20
YES
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, k; cin >> n>> k;
vector<int> a(n);
for(int i=0; i<n; i++) cin >> a[i]; 

for(int i=0; i<n; i++) {
    if(find(a.begin(), a.end(), k-a[i])!=a.end()) {
        cout << "YES";
        return 0;
    }
}
cout << "NO";
return 0;
}