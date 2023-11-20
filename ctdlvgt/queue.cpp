#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/

int main() {
int n, k;
queue<int> que;
cin >> n;
for(int i(0); i<n; i++) {
    int x;
    cin>>x;
    que.push(x);
}
cin >> k;
for(int i(0); i<k; i++) {
    int rem=que.front();
    que.pop();
    que.push(rem);
}
for(int i(0); i<n; i++) {
    cout << que.front() << " " ;
    que.pop();
}
return 0;
}