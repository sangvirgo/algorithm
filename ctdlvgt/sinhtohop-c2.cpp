#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main() {
    int n=0, k=1, a[MAX], dem=0;
    while(n<=k) {
        cout << "Nhap vao n: "; cin >> n; 
        cout << "Nhap vao k: "; cin >> k;
    }
    for(int i=1; i<=k; i++) {
        a[i]=i;
    }
    while (1)
    {
        cout << "Ket qua cua buoc thu " << ++dem << ": ";
        for(int i=1; i<=k; i++) {
            cout << a[i] << " ";
            if(i==k) {
                cout << endl;
            }
        }
        int i=k;
        while(a[i]==n-k+i && i>0) {
            i--;
        }
        if(i==0) {
            break;
        }
        else {
            a[i]++;
            for(int j=i+1; j<=k; j++) {
                a[j]=a[i]-i+j;
            }
        }
    }
    
    return 0;
}