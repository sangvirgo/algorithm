    #include <bits/stdc++.h>
    using namespace std;
    #define MAX 100
    #define INF INT_MAX

    int m; // số đỉnh
    int arr[MAX][MAX]; // ma trận kề
    int minWeight[MAX]; // lưu trữ trọng số nhỏ nhất của các đỉnh
    int VMST[MAX]; // luu tru dinh da them vao cay khung nho nhat
    bool used[MAX]; // kiem tra xem dinh i da duoc them vao cay khung chua

    void Prim() {
        // Khoi tao
        for (int i = 1; i <= m; i++) {
            minWeight[i] = INF; // gan trọng số nhỏ nhất của các đỉnh bằng vô cùng
            VMST[i] = 0; // chưa có đỉnh nào được thêm vào cây khung
            used[i] = false; // chưa có đỉnh nào được thêm vào cây khung
        }

        minWeight[1] = 0; // chọn đỉnh 1 làm đỉnh xuất phát
        VMST[1] = -1; // đỉnh 1 khong co dinh goc 
        int sumWeight = 0; // tổng trọng số của cây khung

        // Duyệt qua m đỉnh
        for (int i = 1; i <= m; i++) {
            
            int u = 0;
            // Tìm đỉnh chưa được thêm vào cây khung có trọng số nhỏ nhất
            for (int j = 1; j <= m; j++) {
                if (!used[j] && (u == 0 || minWeight[j] < minWeight[u])) {
                    u = j;
                }
            }

            used[u] = true;
            sumWeight += minWeight[u];

            for (int v = 1; v <= m; v++) {
                if (arr[u][v] && !used[v] && arr[u][v] < minWeight[v]) {
                    minWeight[v] = arr[u][v];
                    VMST[v] = u;
                }
            }
        }


        // Tính ma trận kề của cây khung nhỏ nhất
        int mst[MAX][MAX] = {0};
        for (int i = 2; i <= m; i++) {
            mst[i][VMST[i]] = mst[VMST[i]][i] = arr[i][VMST[i]];
        }

        // in ra ma trận kề của cây khung nhỏ nhất
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= m; j++) {
                cout << mst[i][j] << " ";
            }
            cout << endl;
        }
    }

    void input() {
        cin >> m;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= m; j++)
                cin >> arr[i][j];
    }

    int main() {
        input();
        cout<<m<<endl;
        Prim();
        return 0;
    