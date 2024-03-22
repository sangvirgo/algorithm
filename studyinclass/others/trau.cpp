#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i <= 100; i++) {
        for(int j = 0; j <= 100; j++) {
            for(int k = 0; k <= 100; k ++) {
                if ((15*i + 9*j + k == 300) && j + i + k == 100) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    return 0;
}