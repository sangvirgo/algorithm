#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
input 
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
*/
int n, m; 
vector<int> adj[1001];
bool visited[1001];

void init() {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i = 1; i <= n; i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    memset(visited, false, sizeof(visited));
}

void Dsf(int u) {
    cout << u << ' ';
    visited[u]=true;
    for(int v: adj[u]) {
        if(!visited[v]) Dsf(v);
    }
}


int main() {
    init();
    Dsf(1);
return 0;
}