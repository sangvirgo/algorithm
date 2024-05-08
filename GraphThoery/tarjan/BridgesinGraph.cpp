#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
/*
3 3 
1 2 
2 3
3 1


*/
int vertices, edges, timer=1, res=0;
vector<int> graph[MAX]; 
vector<int> visited(MAX, 0);
int num[MAX], low[MAX];

void input() {
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        // graph[y].push_back(x);
    }
}

void dfs(int node, int parent, vector<int> &visited, vector<int> graph[], int num[], int low[]) {
    visited[node] = 1;
    num[node]=low[node]=timer++;
    for(auto it: graph[node]) {
        if(it == parent) continue;
        if(!visited[it]) {
            dfs(it, node, visited, graph, num, low);
            low[node] = min(low[node], low[it]);
            if(low[it] > num[node]) {
                // printf("%d
                cout << node << " " << it << endl;
                res++;
            }
        } else {
            low[node] = min(low[node], num[it]);
        }
    }
}

int main() {
input();
cout << endl;
dfs(1, -1, visited, graph, num, low);
cout << res << endl;
return 0;
}