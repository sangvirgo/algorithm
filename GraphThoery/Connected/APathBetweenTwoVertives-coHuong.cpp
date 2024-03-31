#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
tim duong di giua hai dinh
10 10 1 10
1 2
2 3
2 4
3 6
3 7
6 7
7 5 
5 10
5 8
8 9


10 10 8 10
1 2
2 3
2 4
3 6
3 7
6 7
7 5 
5 10
5 8
8 9
*/

int vertices, edges, start, endd;
vector<int> adj[MAX];
bool visited[MAX];
int parent[MAX];
vector<int> path;

void init() {
    cin >> vertices >> edges >> start >> endd; 
    for(int i=0; i<edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}


void DFS(int u) {
    visited[u]=true;
    for(int v: adj[u]) {
        if(!visited[v]) {
            // ghi nhan cha cua v bang u
            parent[v] = u;
            DFS(v);
        }
    }    
} 

void Path(int start, int endd) {
    DFS(start);
    if(!visited[endd]) { 
        cout << "There is no path between two vectices\n"; 
        return;
    } else {
        // truy vetes duong di
        cout << "The path from " <<start << " to " << endd << " : "; 
        while(start!=endd) {
            path.push_back(endd);
            endd=parent[endd];
        }

        // 
        path.push_back(start);

        reverse(path.begin(), path.end());

        for(auto it: path) {
            cout << it << " ";
        }
    }
}

int main() {
init();
Path(start, endd);
return 0;
}