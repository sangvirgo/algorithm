#include <bits/stdc++.h>
using namespace std;
#define MAX 1001
/*
10 12
1 10
2 4
3 6
4 5
5 2
6 7
7 3
7 8
8 9
9 7
10 2
10 3
*/
int vertices, edges, res=0, isDirected=0;
vector<int> graph[MAX]; 
int Low[MAX], Number[MAX], cnt = 0;
int numEdge=0;
bool node[MAX];

void input() {
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        if(!isDirected) graph[y].push_back(x);
    }
}

void tarjan(int u, int p) {
    Low[u] = Number[u] = ++cnt;
    int child = 0;
    for (auto it : graph[u]) {
        if (Number[it] == 0) {
            child++;
            tarjan(it, u);
            Low[u] = min(Low[u], Low[it]);

            if (Number[u] < Low[it]) {
                numEdge++; // Đếm số cạnh cầu
            }
            if (u == p && child > 1) {
                node[u] = true; // Đánh dấu nút gốc khi có nhiều hơn 1 con
            } else if (Number[u] <= Low[it]) {
                node[u] = true; // Đánh dấu nút khi điều kiện của cầu không thỏa mãn
            }
        } else if (it != p) {
            Low[u] = min(Low[u], Number[it]);
        }
    }
}

int main() {
input();
for(int i = 1; i <= vertices; i++) {
    if(!Number[i]) {
        tarjan(i, i);
    }
}

for(int i = 1; i <= vertices; i++) {
    if(node[i]) {
        res++;
    }
}
cout << "So cau: "<< numEdge << "\n";
cout <<"So node: "<<  res;
return 0;
} 