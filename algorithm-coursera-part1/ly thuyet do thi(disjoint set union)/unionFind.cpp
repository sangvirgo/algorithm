#include <bits/stdc++.h>
using namespace std;

class UnionFind {
private: 
    vector<int> parent;
public:
    UnionFind(int n) {
        parent.resize(n);
        // ban dau moi doi tuong la doi tuong doc lap
        for(int i=0; i<n; i++) {
            parent[i]=i;
        }
    }

    // tim phan tu dai dien root
    int find(int n) {
        while(n!=parent[n]) {
            n=parent[n];
        }
        return n;
    }

    // kiem tra co cung cha khong
    bool isConnected(int x, int y) {
        return find(x)==find(y);
    }

    void unionSets(int x, int y) {
        int rootX=find(x);
        int rootY=find(y);

        parent[rootX]=rootY;
    }
};

int main() {
    int n=10;

    UnionFind uf(n);

    uf.unionSets(0, 1);
    uf.unionSets(2, 3);
    uf.unionSets(4, 5);
    uf.unionSets(6, 7);
    uf.unionSets(8, 9);

    cout << uf.isConnected(0, 1) << endl; // true
    cout << uf.isConnected(0, 2) << endl; // false
    cout << uf.isConnected(3, 2) << endl; // false
    cout << uf.isConnected(0, 9) << endl; // false

    uf.unionSets(1, 9);

    cout << uf.isConnected(0, 9) << endl; // true
    return 0;
}