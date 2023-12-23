#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int ucln(int a, int b) {
    if(b==0) {
        return a;
    }
    return ucln(b, a%b);
}

int main() {
    cout << ucln(12, 30);
    return 0;
}