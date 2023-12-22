#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX], dem=0, ok=1, n;


void init(void) {
    cout << "Nhap vao n: "; 
    cin >> n;
    for(int i=1; i<=n; i++) {
        a[i]=i;
    }
}

void print(void){
    cout << "Ket qua cua buoc thu " << ++dem<< ": ";
    for(int i=1; i<=n; i++) {
        cout << a[i] ;
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
}

void Next_Permutation(void) {
    int j=n-1;
    while(j>0 && a[j]>a[j+1]) {
        j--;
    }
    if(j>0){
        int k=n;
        while(a[j]>a[k]){
            k--;
        }
        
        swap(a[j], a[k]);
        int l=j+1, r=n;
        while(l<=r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
    else {
        ok=false;
    }
}

int main() {
    init();
    while(ok) {
        print();
        Next_Permutation();
    }
    return 0;
}