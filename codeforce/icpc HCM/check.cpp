#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, l, h;
    cin >> n >> l >> h;

    vector<vector<int>> visited(h + 1, vector<int>(l + 1, 0));

  
    for (int i = 0; i < n; ++i) {
        int p,h1,h2;
        cin >>p>>h1>>h2;
        for (int j = 1; j <= h1; j++) {
            visited[j][p] = 1;
        }
        for (int t = h-h2+ 1; t<=h; ++t) {
            visited[t][p] = 1;
        }
    }


    queue<pair<int, int>> q;
    for (int i = 1; i <= h; ++i) {
        if (!visited[i][0]) {
            q.push({i, 0});
            visited[i][0] = 1;
        }
    }

    int cnt = 0;
    bool found = false;

    while (!q.empty() && !found) {
        int size = q.size();
        cnt++;

        for (int i = 0; i < size; ++i) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();


            if (y+1 <= l && !visited[x][y+1]) {
                if (y+1 == l) {
                    found = true;
                    break;
                }
                visited[x][y+1] = 1;
                q.push({x,y+1});
            }


            if (x+1 <= h && !visited[x+1][y]) {
                visited[x+1][y] = 1;
                q.push({x+1, y});
            }


            if (x-1 >= 1 && !visited[x-1][y]) {
                visited[x-1][y] = 1;
                q.push({x-1, y});
            }
        }
    }

    if (found) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}