#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MOD 1000000007

int i,n,m;
ll f[100005], res=0, a[100005];
map<ll,int>g;
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(i=1; i<=n; i++) cin>>a[i];
    f[0] = 0;
    g[0] = 1;
    for(i=1; i<=n; i++)
    {
        f[i] = (f[i-1] + (a[i]%m) )%m;
        res += g[f[i]];
        g[f[i]]++;
    }
    cout<<res;
    return 0;
} 
