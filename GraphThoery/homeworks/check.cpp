#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
1 2 3 4
2 5 6 7
3 6 8 9
4 7 9 10
*/

bool isSymmetric(vector<vector<int>> arr, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i][j]!=arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
int n; 
cin >> n;
vector<vector<int>> arr(n, vector<int>(n, 0));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
    }
}

cout << isSymmetric(arr, n);    
return 0;
}