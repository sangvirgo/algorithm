// sinh xau nhi phan co do dai n
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main() {
    int n; cout << "Nhap vao n: "; cin>>n;
    int a[n+1];
    memset(a, 0, sizeof(a));
    while(1) {
        for(int i=1; i<=n; i++) {
            cout << a[i];
            if(i==n) {
                cout << endl;
            }
        }
        int k=n;
        while(a[k]==1 && k>0) {
            a[k]=0;
            k--;
        }
        if(k==0) {
            break;
        }
        else {
            a[k]=1;
        }
    }
    return 0;
}