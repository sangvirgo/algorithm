#include <bits/stdc++.h>
using namespace std;

int main() {
    bool found=false;
    for(int i=0; i<=100; i++) {
        for(int j=0; j<=100; j++) {
            int k =100-i-j;
            if ((i+j+k == 100) && (15*i + 9*j + k == 300)) {
                cout << i << " " << j << " " << k << endl;
                found = true;
            }
        }
    }
    if(!false) {
        cout << "Not Find" << endl;
    }
    return 0;
}