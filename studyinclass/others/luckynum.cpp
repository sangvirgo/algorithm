#include <bits/stdc++.h>
#include <cstring> 
using namespace std;
int a[100], n, ok[100];


void Try(int i) {
    memset(ok, 1, sizeof(ok));
    for(int j=6; j<=8; j+=2) {
        if(ok[j]) {
            a[i]=j;
            ok[j]=0;

            if(i==n-1) {
                for(int k = 0; k < n; ++k) {
                    cout << a[k] << " ";
                }
                cout << endl;            }
        }
            else {
                Try(i+1);
            }

            // Backtrack: undo the changes to explore other possibilities
            ok[j] = 1;
        }
}

int main() {
    cin >>n;
    Try(1);
    return 0;
}