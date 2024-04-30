#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Biến ma trận kề thành danh sách cạnh

5
0 1 1 0 0
1 0 1 0 0
1 1 0 1 0
0 0 1 0 1
0 0 0 1 0

5 5
1 2
1 3
2 3
3 4
4 5

4
0 4 1 3
2 0 7 2
0 1 0 9
0 0 8 0
*/

int vertices, isDirected=1, noWeight=1;
vector<pair<pair<int, int>, int>> result;
vector<vector<int>> arr(MAX, vector<int>(MAX, 0));

void isSymmetric() {
    for(int i=0; i<vertices; i++) {
        for(int j=0; j<vertices; j++) {
            if(arr[i][j]!=arr[j][i]) {
                isDirected = 0;
                break;
            }
        }
    }
}

void input() {
    cin >> vertices;
    for (int i = 1; i <= vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cin >> arr[i][j];
            if(arr[i][j] != 0 && arr[i][j] !=1 && noWeight == 1) {
                noWeight = 0;
            }
        }
    }
    isSymmetric();
}



void convert() {
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            if(arr[i][j]==1 && i<j && isDirected && noWeight==1) {
                result.push_back({{i, j}, 0});
            } else if(arr[i][j]==1  && !isDirected && noWeight==1) {
                result.push_back({{i, j}, 0});
            } else if(arr[i][j]!=0  && i<j && isDirected && noWeight==0) {
                result.push_back({{i, j}, arr[i][j]});
            } else if(arr[i][j]!=0  && !isDirected && noWeight==0) {
                result.push_back({{i, j}, arr[i][j]});
    }
}
}
}


void output() {
    cout << vertices << " " << result.size()<<  endl;
    for(int i=0; i<result.size(); i++) {
        cout << result[i].first.first << " " << result[i].first.second;
        if(noWeight) cout << endl;
        if(!noWeight) cout <<" " <<  result[i].second << endl;
    }
}

int main() {
input();
convert();
output();
return 0;
}