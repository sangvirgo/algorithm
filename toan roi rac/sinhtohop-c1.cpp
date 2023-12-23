#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX], n=0, k=1, ok=1, dem=0;

void init(void) {
    while(n<=k) {
        cout << "Nhap vao n: "; cin >> n; 
        cout << "Nhap vao k: "; cin >> k;
    }
    for(int i=1; i<=k; i++) {
        a[i]=i;
    }
}

void print(void){
    cout << "Ket qua cua buoc " << ++dem<< ": ";
    for(int i=1; i<=k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void nextCombination(void) {
    int i=k;
    while(a[i]==n-k+i) {
        i--;
    }
    if(i>0) {
        a[i]++;
        for(int j=i+1; j<=k; j++) {
            a[j]=a[i]+j-i;
        }
    }
    else {
        ok=false;
    }
}

int main() {
    init();
    while (ok)
    {
        print();
        nextCombination();
    }
    
    return 0;
}