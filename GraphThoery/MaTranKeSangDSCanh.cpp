#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
5 9
0 1 1 1 0 
1 0 1 1 1 
1 1 0 1 1 
1 1 1 0 1 
0 1 1 1 0


5 9 
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
*/
int main() {
    vector<pair<int, int>> result;
    vector<vector<int>> arr(MAX, vector<int>(MAX, 0)); 
    

    int dinh, canh; cin >> dinh >> canh;

    for(int i=1; i<=dinh; i++ ) {
        for(int j=1; j<=dinh; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=1; i<=dinh; i++ ) {
        for(int j=1; j<=dinh; j++) {
            if(arr[i][j]!=0 && i<j) result.push_back({i, j});
        }
    }

    cout << "Ma tran ke" << endl;
    for(auto it: result) {
        cout << it.first << " " << it.second << endl;  
    }
return 0;

}