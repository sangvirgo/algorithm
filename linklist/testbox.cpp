#include <iostream>
#include <windows.h> // Đối với hệ điều hành Windows

using namespace std;

void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void box(int x, int y, int w, int h, int t_color) {
    SetColor(t_color);
    // Vẽ hộp tại vị trí (x, y) với chiều rộng w và chiều cao h
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                // Nếu đang ở viền của hộp, vẽ ký tự '*'
                cout << '*';
            } else {
                // Nếu không, vẽ ký tự khoảng trắng ' '
                cout << ' ';
            }
        }
        cout << endl;
    }
}

int main() {
    box(5, 5, 10, 5, 14); // Vẽ hộp tại vị trí (5, 5) có chiều rộng 10, chiều cao 5, màu 14 (màu xanh lá)
    return 0;
}
