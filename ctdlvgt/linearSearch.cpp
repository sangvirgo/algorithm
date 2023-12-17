#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int target, int n) {
    for(int i=0; i<n; i++) {
        if(a[i]==target) {
            return i;
        }
    }
        return -1;
}

int main() {
    int n, target, a[100];
    cin >>n;
    for(int i=0; i<n; i++) {
        int x;
        cin >>x;
        a[i]=x;
    }
    cin >> target;
    cout << linearSearch(a, target, n);
    return 0;
}