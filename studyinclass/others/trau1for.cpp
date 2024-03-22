#include <iostream>

using namespace std;

int main() {
    int a1 = 1, b1 = 1, a2 = 9, b2 = 1;
    int d = a1 * b2 - a2;
    int d1, d2;
    int c1, c2;

    for (int i = 0; i <= 20; i++) {
        c1 = 100 - i;
        c2 = 300 - 15 * i;
        d1 = c1 * b2 - c2 * b1;
        d2 = a1 * c2 - a2 * c1;

        if (d != 0 && d1 % d == 0 && d2 % d == 0 && (d1 / d) > 0 && (d2 / d) > 0) {
            cout << i << "  " << d1 / d << "  " << d2 / d << endl;
        }
    }

    return 0;
}
