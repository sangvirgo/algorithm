#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/powersof2easy
*/
int powerOf2(int n, int e) {
    int temp=pow(2, e);
    string subPow2= to_string(temp);
    int cnt=0;

    for(int i=1; i<=n; i++) {
        string temp=to_string(i);
        if(temp.find(subPow2)!=string::npos){
            cnt++;
        }
    }
    return cnt;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, e; cin >> n >> e;

cout << powerOf2(n, e);
return 0;
}