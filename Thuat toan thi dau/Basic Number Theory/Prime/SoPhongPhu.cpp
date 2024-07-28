#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://oj.vnoi.info/problem/nkabd
*/
bool soPhongPhu(int n) {
    int sum=1;
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) {
            sum+=i;
            if(i!=n/i) {
                sum+=n/i;
            }
        }
    }
    return sum>n;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int l, r; cin >> l >> r;
int cnt=0;

for(int i=max(12, l); i<=r; i++) {
    if(soPhongPhu(i)) {
        cnt++;
        // cout << i << " ";
    }
}

cout << cnt; 
return 0;
}