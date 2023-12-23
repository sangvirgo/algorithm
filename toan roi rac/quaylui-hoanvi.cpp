#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int *a, n, dem=0, t, check[MAX];

void Init(){
    cout << "Nhap vao n: "; cin >> n;
    a=new int[n+1];
    for(int i=1; i<=n; i++) {
        check[i]=1;
    }
}

void print() {
    cout << "Ket qua cua buoc " << ++dem << ": ";
    for(int i=1; i<=n; i++) {
        cout << a[i];
        if(i==n) {
            cout << endl;
        }
    }
}


void backTrack(int i) {
    for(int j=1; j<=n; j++) {
        if(check[j]) {
            a[i]=j; 
            check[j]=0;
        if(i==n) {
            print();
        }
        else {
            backTrack(i+1);
        }
        check[j]=1;
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