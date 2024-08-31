#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/algo/data-structures/prefix-sum-and-difference-array.md
*/
vector<int> buildPrefixSum(vector<int> &a) {
    int n=a.size();
    vector<int> prefixSum(n+1,0);

    for(int i=1; i<=n; i++) {
        prefixSum[i] = prefixSum[i-1] + a[i-1];
    }
    return prefixSum;
}

void printVector(vector<int> &a) {
    for(int i=0; i<a.size(); i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n=6;
vector<int> a = {10, 20, 10, 5, 15, 25};
vector<int> prefixSum = buildPrefixSum(a);
printVector(prefixSum);

// path two
vector<int> b(n);
partial_sum(a.begin(), a.end(), b.begin());
printVector(b);

return 0;
}