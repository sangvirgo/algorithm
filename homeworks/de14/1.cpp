#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/


void Dem (int a[], int n, int b[], int m){
    int i=0, j=0;
    while(j<m) {
        while(i<n && a[i]<b[j]) {
            i++;
        }
        cout << i << ", ";
        i=0;
        j++;
    }
}

int main() {
    int a[] = {1, 6, 9, 13, 18, 18};
    int n = 6;
    int b[] = {2, 3, 8, 13, 15, 21, 25};
    int m = 7;
    

    Dem(a, n, b, m);
    return 0;
}