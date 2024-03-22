#include <iostream>

using namespace std;

int main() {
    int x = 6;
    int l = 0, r = 16;
    int count=0;
    int* a = new int[17] {3, 5, 7, 8, 12, 17, 19, 20, 24, 27, 31, 36, 39, 40, 42, 48};

    while (r >= l) {
        int m = l + (r - l) / 2;

        if (a[m] == x) {
            count++;
            cout << "m="<<m << endl;
            cout << "l=" << l<< endl;
            cout << "r=" << r << endl;
            cout << "Find x";
            cout << "So lan count: " << count<< endl;
            return 0;  // exit the program after finding the element
        } else if (a[m] > x) {
            count++;
            cout << "m="<<m << endl;
            cout << "l=" << l<< endl;
            cout << "r=" << r << endl;
            cout << endl;
            r = m - 1;
        } else {
            count++;
            cout << "m="<<m << endl;
            cout << "l=" << l<< endl;
            cout << "r=" << r << endl;
            cout << endl;
            l = m + 1;
        }
    }

    cout << "Not Find" << endl;
    cout << "So lan count: " << count<< endl;
    delete[] a;
    return 0;
}
