#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
tim duong di giua hai dinh
9 8 1 7
1 2
2 3
2 4
3 6
3 7
6 7
5 8
5 9
*/
int edges, vertices, start, endd;
vector<int> adj[MAX];
vector<int> path;
int parent[MAX];
bool visited[MAX];


void init() {
    cin >> vertices >> edges >> start >> endd;
    for(int i=0; i<edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    visited[u]=true;

    while(!q.empty()) {
        int front=q.front();
        q.pop();

        for(auto it: adj[front]) {
            if(!visited[it]) {
                q.push(it);
                visited[it]=true;
                parent[it] = front;
            } 
        }
    }
}

void fpath() {
    bfs(start);
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
        path.push_back(start);

        reverse(path.begin(), path.end());
        for(auto it: path) {
            cout << it << " ";
        }
    }
}

int main() {
    init();
    fpath();
return 0;
}