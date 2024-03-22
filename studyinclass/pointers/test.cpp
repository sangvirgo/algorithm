#include <bits/stdc++.h>
using namespace std;

int main() {
    // int x, y, *px, *py;
    // x=5; px=&x;
    // py=px;
    // y=*px;
    // *py=17;

    // cout << x << " " << y;


    // the void pointer
    void *p;
    char c='t';
    int d=10;
    float e=12.54;

    p=&c;

    cout << *((char*)p);

    
    return 0;
}