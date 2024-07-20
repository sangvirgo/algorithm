#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*

*/
vector<int> curSubset;
int n, k;

void printResult() {
    for(int it: curSubset) cout << it << " ";
    cout << endl;
}

void backTracking(int pos) {
    int lastNum=(curSubset.empty()) ?0:curSubset.back();

    for(int i=lastNum+1; i<=n; i++) {
        curSubset.push_back(i);
        if(curSubset.size()==k) printResult();
        else backTracking(pos+1);
        curSubset.pop_back();
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    cin >>n>>k;
    curSubset.clear();
    backTracking(1);
}
return 0;
}