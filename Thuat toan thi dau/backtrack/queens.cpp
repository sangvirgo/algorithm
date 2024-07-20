#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://wiki.vnoi.info/algo/basic/backtracking.md
*/
int n, cnt; 
vector<int> arr, isInDiag1, isInDiag2, check;

void printResult() {
    cout << "Option " << cnt++ << ": [";
    for(int i=1; i<=n; i++) {
        cout << arr[i];
        if(i==n) {
            cout << "]"<< endl;
        }
        else {
            cout << ", ";
        }
    }
}

void backTrack(int i) {
    for(int j=1; j<=n; j++) {
        if(check[j] && isInDiag1[i-j+n] && isInDiag2[i+j-1]) {
            arr[i] = j;
            check[j]=isInDiag1[i-j+n]=isInDiag2[i+j-1]=0;
            if(n==i) printResult();
            else backTrack(i+1);
            check[j]=isInDiag1[i-j+n]=isInDiag2[i+j-1]=1;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    cin >>n;
    cnt=1;
    arr.resize(n+1);
    isInDiag1.assign(2*n, 1);
    isInDiag2.assign(2*n, 1);
    check.assign(n+1, 1);

    backTrack(1);
}
return 0;
}