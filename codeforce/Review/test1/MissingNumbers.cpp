#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/missingnumbers
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
int lastNum;
map<int, int> cnt;
for(int i=0; i<t; i++) {
    int x; cin >> x;
    cnt[x]++;
    lastNum=x;
}

bool good=true;
for(int i=1; i<=lastNum; i++) {
    if(!cnt[i]) {
        good=false;
        cout << i  << endl;
    }
}


if(good) {
    cout << "good job"<< endl;
}
return 0;
}