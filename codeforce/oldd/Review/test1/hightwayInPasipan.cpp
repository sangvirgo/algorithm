#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/highwaytomountfansipan
*/
int solve() {
    int n; cin >> n;
    vector<int> word(n);
    vector<vector<int>> cntLen(51, vector<int>(26));
    for(int i=0; i<n; i++) cin >> word[i];
    int d; cin >> d;
    vector<string> dict(d);
    for(int i=0; i<d; i++) {
        cin >> dict[i];
        int lens=(int)dict[i].size();
        int start=dict[i][0]-'a';
        cntLen[lens][start]++;
    }

    int res=0;
    for(int i=0; i<d; i++) {
        int lens=int(dict[i].length());
        if(lens!=n) continue;
        int start=dict[i][0]-'a';
        cntLen[lens][start]--;
        int temp=1;
        for(int j=0; j<n; j++) {
            int lenrWord=word[j];
            int startChar=dict[i][j]-'a';
            if(cntLen[lenrWord][startChar]>0) temp=1LL*temp*cntLen[lenrWord][startChar]%MOD;
            else temp=0;
            cntLen[lenrWord][startChar]--;
        }

        res=(res+temp)%MOD;
        cntLen[lens][start]++;

        for(int j=0; j<n; j++) {
            int lenrWord=word[j];
            int startChar=dict[i][j]-'a';
            cntLen[lenrWord][startChar]++;
        }
    }
    return res;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    cout << solve() << endl;
}
return 0;
}