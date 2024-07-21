#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
/*

*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<set<int>> arr(n);

for(int i=0; i<n; i++) {
    for(int j=0; j<5; j++) {
        int x; cin >> x;
        arr[i].insert(x);
    }
}

int res=0;
for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
        bool found=false;
        for(int it: arr[i]) {
            if(arr[j].count(it)) {
                found=true;
                break;
            }
        }
        if(!found) res++;
        }
    }

cout << res; 
return 0;
}