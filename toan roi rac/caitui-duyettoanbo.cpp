#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, b, x[MAX], a[MAX], c[MAX];
int xopt[MAX], fopt;
/*
n la so luong
b la max
a trong luong
c la gia tri su dung
xopt la gia tri toi uu
*/
void init(void) {
    ifstream file("caitui.txt");
    if(!file.is_open()) {
        cout << "Failed to open the file." << endl;
        return ;
    }

    file >> n >> b;
    cout << "So luong do vat: " << n << endl;
    cout << "Trong luong tui: " << b << endl;

    for(int i=1; i<=n; i++) {
        file >> a[i] >> c[i];
    }
}

void result(void) {
    cout << "Gia tri su dung toi uu: " << fopt << endl;
    cout << "Cau hinh toi uu la: " ;
    for(int i=1; i<=n; i++) {
        cout << xopt[i] << " ";
    }
    cout << endl;
}

bool check_weight() {
    int weight=0;
    for(int i=1; i<=n; i++) {
        weight+=a[i]*x[i];
    }
    return weight<=b;
}

void sum_up() {
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum+=x[i]*c[i];
    }
    if(fopt<sum) {
        fopt=sum;
        for(int i=1; i<=n; i++) {
            xopt[i]=x[i];
        }
    }
}

void Try(int i) {
    for(int j=0; j<=1; j++) {
        x[i]=j;
        if(i==n) {
            if(check_weight()) {
                sum_up();
                cout << "Cau hinh hien tai: ";
                for(int k=1; k<=n; k++) {
                    cout << x[k] << " ";
                }
                cout << "\t gia tri hien tai: " << fopt;
                cout << endl;
            }
        }
        else {
            Try(i+1);
        }
    }
}

int main() {
    init();
    Try(1);
    result();
    return 0;
}