#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://lqdoj.edu.vn/problem/cntpair02
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, x; cin >> n >> x; vector<int> arr(n+1);
for(int i=1; i<=n; i++) {
    cin >> arr[i];
}

sort(arr.begin(), arr.end());
int i=1, j=n, cnt=0;

while(i<j) {
    if((arr[i]+arr[j]==x) ) {
        int a=arr[i]; int b=arr[j];
        int cnt1=0, cnt2=0;
        if (a == b) {
            int len = j - i + 1;
            cnt += len * (len - 1) / 2;
            break;
        }
        while(i<=j && arr[i]==a) {
            i++;
            cnt1++;
        }
        while(i<=j && arr[j]==b) {
            j--;
            cnt2++;
        }
        cnt+=cnt1*cnt2;
    } else if(arr[i]+arr[j]>x) j--;
    else i++; 
}
cout << cnt;
return 0;
}