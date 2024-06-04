#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int A[100][100];
int rows, cols;
bool checked[100][100];

void DFS(int r, int c)
{
    // dung viec xet vi tri
    if (r >= rows || c >= cols || r < 0 || c < 0 || checked[r][c] || A[r][c] != -1)
    {
        return;
    }
    checked[r][c] = true;
    DFS(r, c + 1);
    DFS(r + 1, c);
    DFS(r - 1, c);
    DFS(r, c - 1);
}

int countConnected()
{
    int cnt = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (!checked[i][j] && A[i][j] == -1)
            {
                DFS(i, j);
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cin >> rows >> cols;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> A[i][j];
            checked[i][j] = false;
        }
    }
    cout << countConnected();
    return 0;
}