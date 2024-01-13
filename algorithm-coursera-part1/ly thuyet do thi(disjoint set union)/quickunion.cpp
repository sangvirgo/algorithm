#include <bits/stdc++.h>
using namespace std;

class QuickUnion {
private:
    vector<int> parents;
public:
    QuickUnion(int n) {
        parents.resize(n);

        for(int i=0; i<n; i++) {
            parents[i]=i;
        }
    }

    int find(int n) {
        while(n!=parents[n]) {
            n=parents[n];
        }
        return n;
    }

    bool isConnected(int a, int b) {
        return find(a)==find(b);
    }

    void unionSets(int a, int b) {
        int rootX=find(a);
        int rootY=find(b);

        parents[rootX]=rootY;
    }
};

int main() {
    int n = 10;
    QuickUnion qu(n);

    qu.unionSets(0, 1);
    qu.unionSets(2, 3);
    qu.unionSets(4, 5);
    qu.unionSets(6, 7);
    qu.unionSets(8, 9);

    std::cout << qu.isConnected(0, 1) << std::endl; // true
    std::cout << qu.isConnected(0, 2) << std::endl; // false
    std::cout << qu.isConnected(3, 2) << std::endl; // false
    std::cout << qu.isConnected(0, 9) << std::endl; // false

    qu.unionSets(1, 9);

    std::cout << qu.isConnected(0, 9) << std::endl; // true
    std::cout << qu.isConnected(9, 4) << std::endl; // true
    return 0;
}

