#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int Row, Col, d, c, canhB=3;
    char A[MAX][MAX], B[MAX][MAX] = {{'X',' ','X'},{' ','O',' '},{'X',' ','X'}};
    cin >> Row >> Col;
    
    // Thực hiện lát gạch
    for (d = 0; d < Row; d++)
        for (c = 0; c < Col; c++)
            A[d][c] = B[d%canhB][c%canhB];
    // Xem kết quả
    for (d = 0; d < Row; d++)
    {
        for (c = 0; c < Col; c++)
            cout << A[d][c];
        cout << ("\n");
    }
}
