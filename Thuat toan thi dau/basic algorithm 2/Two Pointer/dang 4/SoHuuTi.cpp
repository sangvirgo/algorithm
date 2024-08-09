#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
const int MOD = 1e9 + 7;
/*
https://lqdoj.edu.vn/problem/torhar
*/
vector<int> f(MAX);

void createF(ll a, ll b) {
    int remainder=a%b;
    int i=1;
    while(remainder!=0) {
        remainder*10;
        f[i++]=remainder/b;
        remainder%=b;
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll  a, b; cin >> a >> b;
createF(a, b);

int tortoise=1, hare=1;
while(1) {
    tortoise=f[tortoise];
    hare=f[f[hare]];
    if(tortoise==hare) break;
}

// find miaaaaa
int mu=0, p=1;
while(p!=tortoise) {
    p=f[p];
    tortoise=f[tortoise];
    mu++;
}


// find lamda
int lamda=0;
while(1) {
    lamda++;
    p=f[p];
    if(tortoise==p) break;
}

cout << a/b ;

cout << ".(";

for(int i=mu; i<=mu; i++) {
    cout << f[i];
}
cout << ")";
return 0;
}