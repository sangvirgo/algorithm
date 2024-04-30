#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
ds canh thanh ds ke
5 5
1 2
1 3
2 3
3 4
4 5


5
2 2 3
4 1 3
7 1 2 4
9 3 5
10 4


4 9
1 2 4
1 3 1
1 4 3
2 1 2
2 3 7
2 4 2
3 2 1
3 4 9
4 3 8


4
3 2 3 4
6 1 3 4
8 2 4
9 3
3 4 1 3
6 2 7 2
8 1 9
9 8
*/
int vertices, edges, hasWeight=0;
vector<int> result[MAX];
vector<int> resultWeight[MAX];



void input() {
    cin >> vertices >> edges;
    string line;
    getline(cin, line);
    if(line.length()==5) hasWeight=1;
    for (int i = 1; i <= edges; i++) {
        int u, v, w;
        cin >> u >> v;
        if(hasWeight) {
            cin >> w;
            result[u].push_back(v);
            result[v].push_back(u);
            resultWeight[u].push_back(w);
        } else {
            result[u].push_back(v);
            result[v].push_back(u);
        }
    }
}


void output() {
    cout << vertices << endl;
    int temp=0;
    for(int i=1; i<=vertices; i++) {
        temp+=result[i].size();
        cout << temp << " ";
        for(int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    if(hasWeight) {
        temp=0;
        for(int i=1; i<=vertices; i++) {
            temp+=result[i].size();
            cout << temp << " ";
            for(int j=0; j<resultWeight[i].size(); j++) {
                cout << resultWeight[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
input();
output();
// cout << hasWeight;
return 0;
}