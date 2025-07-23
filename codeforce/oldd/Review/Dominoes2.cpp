#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/pr5uch/problems/dominoes2
*/
vector<vector<int>> adj(MAX);
vector<bool> visited(MAX, false);

void dfs(int u) {
    visited[u]=true;
    for(int v: adj[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int n, m, l; cin >> n>> m>> l;
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        visited[i] = false;
    }
    
    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }


    for(int i=0; i<l; i++) {
        int start; cin >> start;
        if(!visited[start]){
            dfs(start); 
        }
    }
    int count=0;

    for(int i=1; i<=n; i++) {
        if(visited[i]){
            count++;
        }
    }
    cout << count << endl;
}
return 0;
}