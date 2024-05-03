#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/

int vertices, edges;
vector<pair<int, int>> adj[MAX];
bool used[MAX];
int parent[MAX], total[MAX];
// true: vertex is in MST, false: vertex is not in MST
struct Edge {
    int u, v, w;
};

void input() {
    cin >> vertices >> edges;
    for(int i=0; i<edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    memset(used, false, sizeof(used));
    for(int i=1; i<=vertices; i++) total[i]=INT_MAX;
}

void prim(int u) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<Edge> mst;
    int sum =0;
    while(!q.empty()) {
        
    }
}

int main() {

return 0;
}