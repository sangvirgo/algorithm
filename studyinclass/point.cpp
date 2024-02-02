#include <bits/stdc++.h>
using namespace std;
int* a , n;
void input(int* a, int n) {
    for(int i=0; i<n; i++) {
        cin>>  *(a+i);
    }
}

void output(int* a, int n) {
    for(int i=0; i<n; i++) {
        cout << *(a+i) << " ";
    }
}

int main() {
    cout << "Nhap n: "; cin >> n;
    a=new int[n];
    input(a, n); output(a, n);
    delete[] a;
    return 0;
}