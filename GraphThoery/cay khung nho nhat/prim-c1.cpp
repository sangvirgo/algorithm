#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
6 9 
1 2 9
1 3 4
2 3 1
2 4 6
3 5 2
4 5 3
4 6 10
5 6 8
*/

int vertices, edges;
vector<pair<int, int>> adj[MAX];
bool used[MAX];
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
}

void prim(int u) {
    vector<Edge> mst;
    int total =0;
    used[u]= true;
    while(mst.size() < vertices -1 ) {
        // choose the smallest edge
        // e=(x, y) x(flase, belong to v) y(true, belong to mst) 
        int min_w = INT_MAX;
        int x, y;
        for(int i=1; i<=vertices; i++) {
            if(used[i]) { // i belong to mst
                for(auto it: adj[i]) {
                    if(!used[it.first] && min_w > it.second) {
                        min_w=it.second;
                        y=i;
                        x=it.first;
                    }
                }

            }
        }
        mst.push_back({x, y, min_w});
        total+=min_w;
        used[x]=true;
    }
    cout <<"cay khung nho nhat: " <<  total << endl;
    for(auto it: mst) {
        cout << it.u << " " << it.v << " " << it.w << endl;
    }
}

int main() {
input();
prim(1);
return 0;
}