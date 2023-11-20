#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/

int main() {
int n; cin >>n;
int a[MAX];
bool b[MAX];
queue<int> result;
for(int i(0); i<n; i++) {
    cin >> a[i];
}
for(int i(0); i<MAX; i++) {
    b[i]=0;
}
int k; cin >> k;
for(int i(0); i<n; i++) {
    if(!b[a[i]]) {
        if(result.size()<k) {
            result.push(a[i]);
            b[a[i]]=1;
        }
        else  {
            b[result.front()]=0;
            b[a[i]]=1;
            result.push(a[i]);
            result.pop();
        }
    }
}
while(!result.empty()) {
    cout << result.front()  << " ";
    result.pop();
}
return 0;
}