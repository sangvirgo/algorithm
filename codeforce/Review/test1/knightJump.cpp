#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/knightjump
*/
int n; 
vector<pair<int, int>> positions={
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};
vector<string> board;


bool check(int newX, int newY, vector<vector<int>> visited){
    if(newX>=0 && newX<n && newY>=0 && newY<n && board[newX][newY]!='#' && visited[newX][newY]==-1) {
        return true;
    } else {
        return false;
    }
}

int bfs(int x, int y) {
    vector<vector<int>> visited(n, vector(n, -1));
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y]=0;

    while(!q.empty()) {
        auto [tempx, tempy]=q.front();
        q.pop();

        if(tempx==0 && tempy==0) {
            return visited[tempx][tempy];
        }
        for(auto it: positions) {
            int newX=tempx+it.first;
            int newY=tempy+it.second;

            if(check(newX, newY, visited)){
                q.push({newX, newY});
                visited[newX][newY]=visited[tempx][tempy]+1;
            }
        }
    }
    return -1;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

cin >> n;
board.resize(n);

for(int i=0; i<n; i++) {
    cin >> board[i];
}
int tempx, tempy;
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        if(board[i][j]=='K') {
            tempx=i, tempy=j;
        }
    }
}
cout << bfs(tempx, tempy);
return 0;
}