#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX], xuoi[MAX], nguoc[MAX], check[MAX];
int n, dem=0;
bool findd=false;

// duong cheo xuoi dc danh dau boi: i-j+n
// duong cheo nguoc dc danh dau boi: i+j-1

void init(void) {
    cin >> n;
    for(int i=1; i<=n; i++) {
        check[i]=1;
    }
    for(int i=1; i<=2*n-1; i++) {
        xuoi[i]=nguoc[i]=1;
    }
}

void result(void) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(a[i]==j) {
                cout << "Q ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void Try(int i) {
    if(findd) return;
    for(int j=1; j<=n; j++) {
        if(check[j] && xuoi[i-j+n] && nguoc[i+j-1]) {
            a[i]=j;
            check[j] = xuoi[i-j+n] = nguoc[i+j-1]=0;
            if(i==n) {
                result();
                findd=true;
            }
            else {
                Try(i+1);
            }
            check[j] = xuoi[i-j+n] = nguoc[i+j-1]=1;
        }
    }
}

int main() {
    init();
    Try(1);
    return 0;
}