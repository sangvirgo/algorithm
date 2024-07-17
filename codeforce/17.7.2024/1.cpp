#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://codeforces.com/problemset/problem/1992/B
*/
int main() {
int t; cin >> t;
while(t--) {
    int n, k; cin >> n>>k;
    int cnt=0;
    vector<int> arr(k);
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int l=0, r=k-1;
    while(l<r) {
        if(arr[l]==1) {
            l++;
            arr[r]++;
        } else {
            arr[l]--;
            r++;
            arr.insert(arr.begin()+l, 1);
            l--;
        }
        cnt++;
    }

    // while(arr.size()>1) {
    //     if(arr[0]==1) {
    //         arr.erase(arr.begin());
    //         arr[arr.size()-1]++;
    //     } else  {
    //         arr[0]--;
    //         arr.insert(arr.begin(), 1);
    //     }
    //     cnt++;
    // }
    cout << cnt<< endl;
}
return 0;
}