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
int vertices, edges;
vector<int> adj[MAX];
bool visited[MAX];

void init() {
    cin >> vertices >> edges;
    for(int i=1; i<=edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
 
void BFS(int n) {
    queue<int> q;
    q.push(n);
    visited[n]=true;

    while(!q.empty()) {
        int front=q.front();
        q.pop();

        cout << front << " ";
        for(auto it: adj[front]) {
            if(!visited[it]) {
                q.push(it);
                visited[it]=true;
            }
        }
    }
}

int main() {
init();
BFS(1);
return 0;
}