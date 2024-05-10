#include <bits/stdc++.h>
using namespace std;
#define MAX 1001
/*
6 9
1 2 12
1 3 4
2 3 1
2 4 5
2 5 3
3 5 2
4 5 3
4 5 10
5 6 8
*/

int vertices, edges;
struct Edge{
    int u, v, w;
};
vector<Edge> adj;
int parent[MAX], sz[MAX];

void init() {
    for(int i=1; i<=vertices; i++) {
        parent[i]=i;
        sz[i]=1;
    }
}

int find(int u) {
    if(u==parent[u]) return u;
    return parent[u] = find(parent[u]);
}

bool Union(int a, int b) {
    a=find(a);
    b=find(b);
    if(a==b) return false;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b]=a;
    sz[a]+=sz[b];
    return true;
}

void input() {
    cin >> vertices >> edges;
    int x, y, w;
    for(int i=0; i<edges; i++) {
        cin >> x >> y >> w;
        adj.push_back({x, y, w});
    }
}

bool cmp( Edge a, Edge b) {
    return a.w<b.w;
}

void kruskal() {
    vector<Edge> mst;
    int total=0;
    sort(adj.begin(), adj.end(), cmp);
    
    for(int i=0; i<edges; i++) {
        if(mst.size() == vertices-1) break;
        Edge temp = adj[i];
        if(Union(temp.u, temp.v)) {
            mst.push_back(temp);
            total+=temp.w;
        }
    }
    if(mst.size() != vertices-1) {
        cout << "khong co cay khung" << endl;
        return;
    }
    cout << "cay khung nho nhat: " << total << endl;
    for(auto it : mst) {
        cout << it.u << " " << it.v << " " << it.w << endl;
    }
}

int main() {
input();
init();
kruskal();
return 0;
}