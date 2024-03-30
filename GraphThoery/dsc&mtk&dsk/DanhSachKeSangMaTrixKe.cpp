#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
5 
2 3 4 
1 3 4 5 
1 2 4 5 
1 2 3 5 
2 3 4 


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

    int vertices; cin >> vertices; cin.ignore();

    for(int i=0; i<=vertices; i++ ) {
        string s; getline(cin, s);
        stringstream ss(s); int num;
        while(ss>>num) {
            arr[i][num]=1;
        }
    }

    cout << "\nMa tran ke"<< endl;
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


return 0;

}