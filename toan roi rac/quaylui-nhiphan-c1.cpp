#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int n, dem=0, t;
int *a;

void init(void) {
    cout << "Nhap vao n: "; 
    cin >> n;
    a=new int[n+1];
}

void print(void){
    cout << "Ket qua cua buoc thu " << ++dem<< ": ";
    for(int i=1; i<=n; i++) {
        cout << a[i] ;
    }
    cout << endl;
}

void Try(int i) {
    for(int j=0; j<=1; j++) {
        a[i]=j;
        if(i==n) {
            print();
        }
        else {
            Try(i+1);
        }
    }
}

int main() {
    cout << "Nhap vao so luong test case: "; cin >> t;
    while (t--)
    {
        init();
        Try(1);
        dem=0;
        delete[] a;
    }
    
    return 0;
}