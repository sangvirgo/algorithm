#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
const int MOD = 1e9 + 7;
/*
https://oj.vnoi.info/problem/nksgame

2
1 -2
2 3

*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
vector<int> a(t), b(t);
for(int i=0; i<t; i++) cin >> a[i];
for(int i=0; i<t; i++) cin >> b[i];

sort(a.begin(), a.end());
sort(b.begin(), b.end());

int l=0, r=t-1;
int res=abs(a[0]+b[0]);
while(l!=t && r!=-1) {
    int temp=a[l]+b[r];
    res=min(res, abs(temp));

    if(temp<0) l++;
    else r--;
}


cout << res;
return 0;
}