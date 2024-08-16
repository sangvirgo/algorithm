#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/translate/topcoder/dynamic-programming

3 11
1 3 5
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, s; cin >> n>> s;
vector<int> arr(n);
for(int i=0; i<n; i++) cin >> arr[i];

vector<int> Minn(s+1, INT_MAX);
Minn[0]=0;

for(int i=1; i<=s; i++) {
    for(int j=0; j<n; j++) {
        if(i>=arr[j] && Minn[i-arr[j]]+1<Minn[i]) {
            Minn[i]=Minn[i-arr[j]]+1;
        }
    }
}

if(Minn[s]==INT_MAX) cout<< -1;
else cout <<Minn[s];
return 0;
}