#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://youtu.be/JtWcUHRyqkA?si=DQOk5cjqPIEn_dY0&t=1504
chuyen danh sach canh sang ma tran ke

5 9 
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5

*/



int main() {
    int a[MAX][MAX], dinh, canh;
    cin >> dinh >> canh;


// bao nhiu lanf chayj
    for(int i=0; i<canh; i++) {
        int x, y; cin >> x >> y;
        a[x][y]=a[y][x]=1;
    }

    for(int i=1; i<=dinh; i++) {
        for(int j=1; j<=dinh; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}