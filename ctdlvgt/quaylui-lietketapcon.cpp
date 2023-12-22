#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int *a, n, dem=0, t, k;

void Init(){
    cout << "Nhap vao n: "; cin >> n;
    cout << "Nhap vao k: "; cin >> k;
    a=new int[k+1];
    a[0]=0;
}

void print() {
    cout << "Ket qua cua buoc " << ++dem << ": ";
    for(int i=1; i<=k; i++) {
        cout << a[i];
        if(i==k) {
            cout << endl;
        }
    }
}

void backTrack(int i) {
    for(int j=a[i-1]+1; j<= n-k+i; j++) {
        a[i]=j;
        if(i==k) {
            print();
        }
        else {
            backTrack(i+1);
        }
    }
}

int main() {
    cout << "Nhap vao test case :"; cin >> t;
    while(t--) {
        Init();
        backTrack(1);
        dem=0;
        delete[] a;
    }
    return 0;
}