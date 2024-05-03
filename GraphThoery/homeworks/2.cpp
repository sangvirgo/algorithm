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
int vertices, edges, hasWeight=0, hasDirected=1;
vector<int> arr[MAX];
vector<int> weight[MAX];
vector<pair<int, int>> edg;


void input() {
    cin >> vertices >> edges;
    cin.ignore();
    string line;
    for(int i=0; i<edges; i++) {
        getline(cin, line);
        stringstream ss(line);
        int x1, x2, x3;
        ss >> x1 >> x2 ;
        if(ss >> x3) {
            hasWeight = 1;
            weight[x1].push_back(x3);
        }
        edg.push_back({x1, x2});
}
}

void isDirected() {
    for(int i = 0; i < edges; i++) {
        for(int j=1; j<edges; j++) {
            if(edg[i].first == edg[j].second && edg[i].second == edg[j].first) {
                hasDirected = 0;
                break;
            }
        }
    }
}

void convert() {
    for(int i=0; i<edges; i++) {
        arr[edg[i].first].push_back(edg[i].second);
        if(hasDirected) arr[edg[i].second].push_back(edg[i].first);
    }
}

void output() {
    cout << vertices << endl;
    int temp = 0;
    for(int i=1; i<=vertices; i++) {
        temp+=arr[i].size();
        cout<< temp << " ";
        for(int j=0; j<arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    if(hasWeight) {
        temp=0;
        for(int i=1; i<=vertices; i++) {
            temp+=weight[i].size();
            cout<< temp << " ";
            for(int j=0; j<weight[i].size(); j++) {
                cout << weight[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
input();
isDirected();
convert();
output();
cout << hasDirected << " " << hasWeight;
return 0;
}