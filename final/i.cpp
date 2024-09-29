#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
3
5
1 4 2 5 3
4 5 1 2 3

8
8 2 4 7 1 6 5 3
5 6 1 4 8 2 7 3

8
8 2 4 7 1 6 5 3
8 2 4 7 1 6 5 3


*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int n; cin >> n;
    vector<int> t1(n), t2(n);
    for(int i=0; i<n; i++) cin >> t1[i];
    for(int i=0; i<n; i++) cin >> t2[i];
    bool same=true;
    
    for(int i=0; i<n; i++) {
        if(t1[i]!=t2[i]) same=false;
    }
    if(same) {
        cout << n << endl;
    } else {
    int res=0;
    int temp=t1[0];
    for(int i=0; i<n; i++) {
        if(t2[i]==temp) break;
        res++;
    }
    cout << res << endl;
    }
}
return 0;
}