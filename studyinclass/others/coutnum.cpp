#include <bits/stdc++.h>
using namespace std;

int findMaxDigit(int n, int maxDigit = INT_MIN) {
    if(n==0) return 0;
    int k=findMaxDigit(n/10);
    return (k<n%10)?n%10:k;
}

int main() {
    cout << findMaxDigit(2019);
    return 0;
}
