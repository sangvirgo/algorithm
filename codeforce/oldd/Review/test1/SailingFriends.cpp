#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
const int MOD = 1e9 + 7;
/*
https://open.kattis.com/contests/rpkkzj/problems/sailingfriends
*/

vector<int> friends[MAX];
vector<bool> visited(MAX, 0);
int n, b, m;
vector<bool> isBoat(MAX, 0);

void init() {
    cin >> n >> b >>m;
    for(int i=0; i<b; i++) {
        int x; cin >> x;
        isBoat[x]=true;
    }
    for(int i=0; i<m; i++) {
        int x, y; cin >> x >>y;
        friends[x].push_back(y);
        friends[y].push_back(x);
    } 
}

void dfs(int u, bool& haveBoat) {
    visited[u]=true;
    if(isBoat[u]) haveBoat=true;
    for(int it: friends[u]) {
        if(!visited[it]) {
            dfs(it, haveBoat);
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

init();

int res=0;
for(int i=1; i<=n; i++) {
    if(!visited[i]) {
        bool haveBoat=false;
        dfs(i, haveBoat);
        if(!haveBoat) res++;
    }
}
cout << res;
return 0;
}