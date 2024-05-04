#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int vertices, isDirected=1;
vector<vector<int>> arr(MAX, vector<int>(MAX, 0));
bool used[MAX];

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

void prim(int u) {
    int key[MAX];
    int parent[MAX];

    for (int i = 1; i <= vertices; i++) {
        key[i] = INT_MAX;
        used[i] = false;
    }

    key[u] = 0;
    parent[u] = -1;

    for (int count = 0; count < vertices - 1; count++) {
        int minKeyVertex = -1;
        int minKey = INT_MAX;
        for (int v = 1; v <= vertices; v++) {
            if (!used[v] && key[v] < minKey) {
                minKey = key[v];
                minKeyVertex = v;
            }
        }

        used[minKeyVertex] = true;

        for (int v = 1; v <= vertices; v++) {
            if (arr[minKeyVertex][v] && !used[v] && arr[minKeyVertex][v] < key[v]) {
                parent[v] = minKeyVertex;
                key[v] = arr[minKeyVertex][v];
            }
        }
    }

    cout << "Edge \tWeight\n";
    for (int i = 2; i <= vertices; i++) {
        cout << parent[i] << " - " << i << " \t" << arr[i][parent[i]] << " \n";
    }
}

int main() {
    input();
    prim(1);
    return 0;
}
