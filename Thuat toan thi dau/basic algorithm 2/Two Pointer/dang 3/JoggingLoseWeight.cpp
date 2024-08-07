#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://oj.vnoi.info/problem/vmquabeo
10 3 4
5 6 9 7 4 3 5 6 8 8

*/
int heightDf(set<int>& arr) {
    if(arr.size()==1) *arr.begin();
    return *arr.end()-*arr.begin();
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, le, d; cin >> n>> le>> d;
vector<int>  a(n);
for(int i=0; i<n; i++) cin >> a[i];

int res=0, heightDiff=0, sumLenght=0, l=0, r=0;
set<int> temp;

while(r<n && l<=r) {
    sumLenght=r-l;
    while(sumLenght<le && r<n) {
        temp.insert(a[r]);
        r++;
        sumLenght++;
    }
    heightDiff=heightDf(temp);

    while(heightDiff<=d && sumLenght>=le && r<n) {
        if(sumLenght>=le && heightDiff<=d) res++;
        temp.insert(a[r]);
        r++;
        heightDiff=heightDf(temp);
        sumLenght++;
        if(sumLenght<le && heightDiff>d) break;
    }

    while(heightDiff>d) {
        temp.erase(temp.begin());
        sumLenght--;
        heightDiff=heightDf(temp);
        l++;
    }
}
cout << res;
return 0;
}