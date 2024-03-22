#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int sum=n*(n+1)/2;
    cout << (s==sum) ? "full" : s-sum; 
    return 0;
}

