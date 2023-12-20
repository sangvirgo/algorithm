// sinh xau nhi phan co do dai n
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX], dem=0, ok=1, n;


void init(void) {
    cout << "Nhap vao n: "; 
    cin >> n;
}

void print(void){
    cout << "Ket qua cua buoc thu " << ++dem<< endl;
    for(int i=1; i<=n; i++) {
        cout << a[i] ;
    }
    cout << endl;
}

void nextString(void) {
    int i=n;
    while(i>0 && a[i]==1) {
        a[i]=0;
        i--;
    }
    if(i>0) {
        a[i]=1;
    }
    else ok=0;
}

int main() {
    init();
    while(ok) {
        print();
        nextString();
    }
    return 0;
}

