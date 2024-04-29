#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Biến ma trận kề thành danh sách cạnh
*/

int vertices, noWeight=1, ;
vector<int> result[MAX];
vector<vector<int>> arr(MAX, vector<int>(MAX, 0));

void input() {
    cin >> vertices;
    for (int i = 1; i <= vertices; i++) {
        for(int j=1; j<=vertices; j++) {
            cin >> arr[i][j];
            if(arr[i][j] != 0 || arr[i][j] !=1 && noWeight == 1) {
                noWeight = 0;
            }
        }
    }
}



int main() {

return 0;
}