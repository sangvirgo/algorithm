#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
kiem tra tinh lien thong manh yeu cua do thi
5 7
1 2
1 4
2 3
2 4
3 4
4 5
5 1


5 7
1 2
1 4
2 3
2 4
4 3
4 5
5 1
*/

int vertices, edges;
vector<int> adj[MAX];
bool visited[MAX];

void init() {
    cin >> vertices >> edges;
    for(int i=0; i<edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

bool dfs(int a) {
    stack<int> s;
    s.push(a);
    // visit
    visited[a]=true;

    while(!s.empty()) {
        int temp=s.top();
        s.pop();

        for(auto it: adj[temp]) {
            if(!visited[it]) {
                // visit
                visited[it]=true;
                s.push(temp);
                s.push(it);
                break;
            }
        }
    }
    return false;
}

bool isStronglyConnected() {
    for(int i = 1; i <= vertices; i++) {
        memset(visited, false, sizeof(visited));
        dfs(i);
        for(int j = 1; j <= vertices; j++) {
            if(!visited[j]) return false;
        }
    }
    return true;
}

bool isWeeklyConnected() {
    for(int i=1; i<= vertices; i++) {
        memset(visited, false, sizeof(visited));
        dfs(i);
        for(int j=1; j<=vertices; j++) {
            if(!visited[j]) true;
        }
    }
    return false;
}

int main() {
init();
cout << isStronglyConnected() << endl;
cout << isWeeklyConnected() << endl;
return 0;
}