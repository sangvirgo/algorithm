#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void swap(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    int n, dem=0;
    cout << "Nhap vao n: ";
    cin >> n;

    int* a=new int[n+1];

    for(int i=1; i<=n; i++) {
        a[i]=i;
    }
    
    while(1) {
    cout << "Ket qua cua buoc thu " << ++dem<< ": ";
    for(int i=1; i<=n; i++) {
        cout << a[i] ;
        if(i==n) {
            cout << endl;
        }
    }

    int j=n-1;
    while(a[j]>a[j+1] && j>0) {
        j--;
    }

    if(j>0) {
        int k=n;
        while(a[j]>a[k]) {
            k--;
        }

        swap(a[k], a[j]);
        int l=j+1, r=n;
        while(l<=r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }

        else {
            break;
        }
    }

    delete[] a;
    return 0;
}