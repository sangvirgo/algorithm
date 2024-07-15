#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/P181PROA/

lưu ý cần cả so dau va so cuoi deu la so le
*/
int main() {
int n; cin >> n;
bool beginArr=false;
if(n%2==0) {
    cout << "no";
    return 0;
}
for(int i=0; i<n; i++) {
    int x; cin >> x;
    if(i==0 && x%2!=0) beginArr=true;
    if(i==n-1 && beginArr && x%2!=0) {
        cout << "yes";
        return 0;
    }
}

cout << "no";
return 0;
}