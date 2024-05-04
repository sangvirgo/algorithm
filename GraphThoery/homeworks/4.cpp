#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
input
13
0 2 1 3 0 0 0 0 0 0 0 0 0
2 0 2 0 0 5 5 0 0 0 0 0 0
1 2 0 4 0 5 0 0 0 0 0 0 0
3 0 4 0 5 5 0 0 0 0 0 0 0
0 0 0 5 0 6 0 0 0 6 0 0 0
0 5 5 5 6 0 6 6 6 6 0 0 0
0 5 0 0 0 6 0 6 0 0 0 0 0
0 0 0 0 0 6 6 0 7 0 0 7 7
0 0 0 0 0 6 0 7 0 7 7 0 0
0 0 0 0 6 6 0 0 7 0 7 7 0
0 0 0 0 0 0 0 0 7 7 0 8 0
0 0 0 0 0 0 0 7 0 7 8 0 8
0 0 0 0 0 0 0 7 0 0 0 8 0

Expected Output 
13
0 2 1 3 0 0 0 0 0 0 0 0 0
2 0 0 0 0 5 5 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0 0 0 0
3 0 0 0 5 0 0 0 0 0 0 0 0
0 0 0 5 0 0 0 0 0 6 0 0 0
0 5 0 0 0 0 0 6 6 0 0 0 0
0 5 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 6 0 0 0 0 0 7 7
0 0 0 0 0 6 0 0 0 0 7 0 0
0 0 0 0 6 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 7 0 0 0 0
0 0 0 0 0 0 0 7 0 0 0 0 0
0 0 0 0 0 0 0 7 0 0 0 0 0
*/
int vertices, isDirected=1;
vector<pair<int, int>> adj[MAX];
bool used[MAX];
vector<vector<int>> arr(MAX, vector<int>(MAX, 0));
struct Edge {
    int u, v, w;
};

void isSymmetric() {
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            if(arr[i][j]!=arr[j][i]) {
                isDirected = 0;
                return;
            }
        }
    }
}

void input() {
    cin >> vertices;
    for (int i = 1; i <= vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cin >> arr[i][j];
        }
    }
    isSymmetric();
}
 
void convert() {
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            if(arr[i][j]!=0 && i<j && isDirected) {
                adj[i].push_back({j, arr[i][j]});
            } else if(arr[i][j]!=0 && !isDirected) {
                adj[i].push_back({j, arr[i][j]});
            }
        }
    }

}


void prim(int u) {
    vector<Edge> mst;
    used[u]= true;
    while(mst.size() < vertices -1 ) {
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
        used[x]=true;
    }
    arr.assign(MAX, vector<int>(MAX, 0));
    for(auto it: mst) {
        arr[it.u][it.v]=it.w;
        if(isDirected) arr[it.v][it.u]=it.w;
    }
}

void output() {
    cout << vertices << endl;
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
input();
convert();
prim(1);
output();
return 0;
}