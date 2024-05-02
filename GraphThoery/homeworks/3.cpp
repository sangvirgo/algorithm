#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Biến ma trận kề thành danh sách cạnh

5
2 2 3
4 1 3
7 1 2 4
9 3 5
10 4

5
0 1 1 0 0
1 0 1 0 0
1 1 0 1 0
0 0 1 0 1
0 0 0 1 0




4
3 2 3 4
6 1 3 4
8 2 4
9 3
3 4 1 3
6 2 7 2
8 1 9
9 8


4
0 4 1 3
2 0 7 2
0 1 0 9
0 0 8 0
*/

int vertices, hasWeight;
vector<int> arr[MAX];
vector<int> weight[MAX];
vector<vector<int>> result(MAX, vector<int>(MAX, 0));
// int result[MAX][MAX] = {0};

void input() {
    cin >> vertices;
    cout << "\n" << vertices << endl;
    cin.ignore();
    string line;
    int lineCount = 0;

    while (getline(cin, line) && !line.empty()) {
        stringstream ss(line);
        int x;
        ss >> x;
        while(ss >> x) {
            if (lineCount < vertices) {
                arr[lineCount+1].push_back(x);
            } else {
                weight[lineCount-vertices+1].push_back(x);
            }
    }
    lineCount++;
    hasWeight = (lineCount == 2 * vertices);
}
}


void convert() {
    for (int i = 1; i <= vertices; ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (!hasWeight) {
                result[i][arr[i][j]] = 1;
            } else {
                result[i][arr[i][j]] = weight[i][j];
            }
        }
    }
}


void output() {
    for(int i=1; i<=vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    
}

int main() {
input();
convert();  
output();
return 0;
}