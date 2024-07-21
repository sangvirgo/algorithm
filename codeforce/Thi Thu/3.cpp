#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*

*/
int n, result=0;
vector<int> isInDiag1, isInDiag2, check;

void backTrach(int i) {
    for(int j=1; j<=n; j++) {
        if(check[j] && isInDiag1[i-j+n] && isInDiag2[i+j-1]) {
            check[j] = isInDiag1[i-j+n] = isInDiag2[i+j-1]=0;
            if(i==n) result++;
            else backTrach(i+1);
            check[j] = isInDiag1[i-j+n] = isInDiag2[i+j-1]=1;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >>n;
isInDiag1.assign(2*n, 1);
isInDiag2.assign(2*n, 1);
check.assign(n+1, 1);

backTrach(1);
cout << result;
return 0;
}