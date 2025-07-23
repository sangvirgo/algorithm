#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/sort
*/
class digit {
    public:
        ll value;
        int cnt;
        int index;
    digit() {
        value=0;
        cnt=0;
        index=0;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll n, c; cin >> n >> c;
map<ll, int> cnt;
map<ll, int> index;


for(int i=0; i<n; i++) {
    int x; cin >> x;
    cnt[x]++;
    if (index.find(x) == index.end()) {
        index[x] = i;  
    }
}

vector<digit> v(cnt.size());
int i=0;
for(auto it: cnt) {
    v[i].cnt=it.second;
    v[i].value=it.first;
    v[i].index=index[it.first];
    i++;
}

sort(v.begin(), v.end(), [](const digit &a, const digit &b){
    if(a.cnt!=b.cnt) {
        return a.cnt>b.cnt;
    }
    return a.index< b.index;
});

for(auto it: v) {
    for(int i=0; i<it.cnt; i++) {
        cout << it.value << " ";
    }
}
return 0;
}