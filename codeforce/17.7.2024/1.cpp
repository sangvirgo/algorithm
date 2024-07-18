#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://codeforces.com/problemset/problem/1992/B
4

5 3
3 1 1

5 2
3 2

11 4
2 3 1 5

16 6
1 6 1 1 1 6
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t; cin >> t;
while(t--) {
    int n, k; cin >> n>>k;
    int cnt=0;
    vector<int> arr(k);
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<k-1; i++) {
        cnt+=arr[i]==1?1:2*arr[i]-1;
    }
    cout << cnt<< endl;
}
return 0;
}