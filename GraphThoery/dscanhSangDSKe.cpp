#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
danh sach canh sang ds ke
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
    vector<int> adj[MAX];
    int dinh, canh;
    cin >> dinh >> canh;
    for(int i=0; i<canh; i++) {
        int x, y; cin >> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << "danh sach ke" << endl;
    for(int i=1; i<=dinh; i++ ) {
        cout << "dinh " << i << ": ";
        for(auto it:adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
return 0;
}