#include <bits/stdc++.h>
using namespace std;

int main() {
    int ga, cho;
    for(int i=1; i<=36/2; i++) {
        if(2*i+4*(36-i)==100) {
            ga=i;
        }
    }
    cout << "ga la: " << ga << endl;
    cout << "cho la: " << 36-ga;
    return 0;
}