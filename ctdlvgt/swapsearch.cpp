#include <bits/stdc++.h>
using namespace std;

int minSearch(int a[], int n) {
    int minValue = a[0];
    int result = 0;
    for (int i = 1; i < n; i++) {
        if (minValue > a[i]) {
            minValue = a[i];
            result = i;
        }
    }
    return result;
}

int maxSearch(int a[], int n) {
    int maxValue = a[0];
    int result = 0;
    for (int i = 1; i < n; i++) {
        if (maxValue < a[i]) {
            maxValue = a[i];
            result = i;
        }
    }
    return result;
}



int main() {
    int n, a[100];
    cin >>n;
    for(int i=0; i<n; i++) {
        int x;
        cin >>x;
        a[i]=x;
    }
    int min=minSearch(a, n);
    int max=maxSearch(a, n);
    swap(a[min], a[max]);

    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}