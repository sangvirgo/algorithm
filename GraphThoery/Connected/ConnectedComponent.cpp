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


    10 9
    1 3
    1 5
    2 4
    3 6
    3 7
    3 9 
    5 8
    8 9
    10 10 

    7 14
    1 2
    1 6
    2 1
    3 1
    4 1
    4 2
    4 6
    5 6
    6 1
    6 3 
    6 4
    6 5
    7 1
    7 6
*/
int vertices, edges;
vector<int> adj[MAX];
bool visited[MAX];

void init() {
    cin >> vertices >> edges;
    for(int i=1; i<=edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
 
void DFS(int n) {
    // cout << n << " ";
    visited[n]=true;
    for(auto it:adj[n]) {
        if(!visited[it]) {
            DFS(it);
        }
    }
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


int ConnectedComponent() {
    int cnt=0;
    for(int i=1; i<=vertices; i++) {
        if(!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    return cnt;
} 


int main() {
init();
cout << ConnectedComponent();
return 0;
}