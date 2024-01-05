#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int n, dem=0;
int a[MAX];

void init(void) {
    cout << "Nhap vao n: "; 
    cin >> n;
}

void print(void){
    cout << "Ket qua cua buoc thu " << ++dem<< ": ";
    for(int i=1; i<=n; i++) {
        cout << a[i] ;
    }
    cout << endl;
}

bool isChan() {
    int count=0;
    for(int i=1; i<=n; i++) {
        if(a[i] == 1) {
            count++;
        }
    }
    return (count%2==0) ? 1 : 0;
}

void Try(int i) {
    for(int j=0; j<=1; j++) {
        a[i]=j;
        if(i==n && isChan()) {
            print();
        }
        else if(i<n) {
            Try(i+1);
        }
    }
}

int main() {
        init();
        Try(1);
        dem=0;
    return 0;
}