#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
(4 điểm) Cho ma trận A (nXm) chỉ chứa các giá trị 0 và -1. Giả sử
có định nghĩa về “thành phần liên thông” như sau: một nhóm các ô liên
tục (chỉ tính 4 phía trên, dưới, trái, phải) cùng chứa giá trị -1 được xem
là 1 “thành phần liên thông”. Viết hàm đềm số “thành phần liên thông”
có trong ma trận.
Minh họa:

7 6
-1 -1 0 0 0 -1
-1 -1 0 0 0 0
-1 0 0 0 0 0
-1 -1 0 0 0 -1
0 0 0 0 0 -1
-1 0 -1 -1 -1 -1
-1 0 0 0 0 -1


7 4
 0  0 -1  0
 0 -1 -1 -1
 0  0 -1  0
 0  0  0  0
-1  0  0  0
 0 -1  0  0
 0  0  0  0
*/
int col, row;
vector<vector<int>> arr;

void init()
{
    cin >> row >> col;
    arr.resize(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void dfs(int x, int y) {
    if (y<0 || x < 0 ||  y >= col || x >= row || !arr[x][y]   ) return;
    arr[x][y] = 0;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

void connected()
{
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << "So thanh phan lien thong: " << cnt;
}

int main()
{
    init();
    connected();
    return 0;
}