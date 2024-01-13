#include <bits/stdc++.h>
using namespace std;

int tong(int n) {
    if(n<10) return n;
       return tong(n/10)+n%10;
}

int main() {
    cout << tong(2019);
    return 0;
}