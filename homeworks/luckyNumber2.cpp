#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    queue<long> lp;
    lp.push(6);
    lp.push(8);

    while(1) {
        int top = lp.front();
        if(top>n) break;
        lp.pop();
        cout << top<< " ";
        lp.push(top*10+6);
        lp.push(top*10+8);        
    }
    return 0;
}