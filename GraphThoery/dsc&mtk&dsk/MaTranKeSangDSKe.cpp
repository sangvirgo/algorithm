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
    vector<int> result[MAX];
    vector<vector<int>> arr(MAX, vector<int>(MAX, 0)); 

    int vertices, edges; cin >> vertices >> edges;

    for(int i=1; i<=vertices; i++ ) {
        for(int j=1; j<=vertices; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=1; i<=vertices; i++ ) {
        for(int j=1; j<=vertices; j++) {
            if(arr[i][j]!=0 ) {
                result[i].push_back(j);
                // result[j].push_back(i);
            }
        }
    }

    cout << "\nDanh sach ke\n";
    for(int i=1; i<=vertices; i++) {
        cout << "vertices " << i << ": ";
        for(auto it:result[i]) cout << it << " ";
        cout << endl;
    }
return 0;

}