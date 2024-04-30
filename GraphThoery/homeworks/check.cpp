#include <bits/stdc++.h>
using namespace std;

/*
input
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
expect output
1 2 4
1 3 1
1 4 3
2 1 2
2 3 7
2 4 2
3 2 1
3 4 9
4 3 8
*/

int vertices, edges;
vector<pair<int, int>> arr[100]; // Sử dụng pair để lưu trọng số (nếu có)

void input() {
    cin >> vertices >> edges;
    cin.ignore(); // Đọc bỏ dấu newline
    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v;
        if (cin.peek() != '\n') { // Kiểm tra xem còn dữ liệu trong dòng không
            cin >> w; // Đọc trọng số nếu có
            arr[u].push_back({v, w});
        } else {
            arr[u].push_back({v, 0}); // Nếu không có trọng số, gán trọng số là 0
        }
    }
}

void output() {
    cout << "result" << endl;
    for (int i = 1; i <= vertices; i++) {
        for (auto edge : arr[i]) {
            cout << i << " " << edge.first << " " ;
            if(edge.second != 0) {
                cout << edge.second << endl;
            } else {
                cout << endl;
            }
        }
    }
}

int main() {
    input();
    output();
    return 0;
}
