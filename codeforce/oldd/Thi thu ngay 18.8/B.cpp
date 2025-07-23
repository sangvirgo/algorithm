#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1e9
const int MOD = 1e9 + 7;
/*
BÀI 5B - ƯỚC CHUNG LỚN NHẤT

Cho hai số nguyên dương N và M. Hãy tìm cách xây dựng dãy số A[] nguyên dương có đúng N phần tử thỏa mãn:

A[1] + A[2] + … + A[N] = M

và UCLN(A[1], A[2], …, A[N]) là lớn nhất có thể.

Input

Gồm hai số nguyên dương N và M (1 ≤ N ≤ 105, N ≤ M ≤ 109).

Output

In ra UCLN của dãy số tìm được.

Test ví dụ:          

Input

Output

3 14

2

22 743

1

26 695

5



Giải thích test 1: A[] = {2, 4, 8}
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, m; cin >> n >> m;


ll result=1;
for(ll i=1; i*i<=m; i++) {
    if(m%i==0) {
        if(m/i>=n) result=max(result, i);
        if(i>=n) result=max(result, m/i);
    }
}
    
cout << result << endl;

return 0;
}