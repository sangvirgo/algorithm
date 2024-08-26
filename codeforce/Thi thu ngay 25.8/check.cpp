#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;

map<int, map<int, map<bool, int> > > ch;
map<int, map<int, map<int, bool> > > lap;
int i, n, a, b, c, t, m, tt, res = 0, d, s, x=0, j;
long double se[3000];
bool am;
signed main()
{
cin>>n;
for(i=1; i<=n; i++)
{
cin>>a>>b>>c;
if (lap[a][b][c]==true) continue;
lap[a][b][c] = true;
if (a==0)
{
if (b==0 && c==0)
{
cout<<-1;
return 0;
}
if (b==0 && c!=0) continue;
am = !((c>0)^(b<0));
c = abs(c);
b = abs(b);
t = c/gcd(c,b);
m = b/gcd(c,b);
if (ch[t][m][am]==0)
{
ch[t][m][am] = 1;
res++;
}
} else
{
d = b*b - 4*a*c;
if (d<0) continue; else
if (d==0)
{
am = !((b>0)^(a<0));
b = abs(b);
a = abs(a);
t = b/gcd(b,2*a);

m = (2*a)/gcd(b,2*a);
if (ch[t][m][am]==0)
{
ch[t][m][am] = 1;
res++;
}
} else
{
if (cp(d))
{
s = sqrt(d);
tt = -b + s;
am = !((tt<0)^(a<0));
tt = abs(tt);
a = abs(a);
t = tt/gcd(tt,2*a);
m = (2*a)/gcd(tt,2*a);
if (ch[t][m][am]==0)
{
ch[t][m][am] = 1;
res++;
}
tt = -b - s;
am = !((tt<0)^(a<0));
tt = abs(tt);
a = abs(a);
t = tt/gcd(tt,2*a);
m = (2*a)/gcd(tt,2*a);
if (ch[t][m][am]==0)
{
ch[t][m][am] = 1;
res++;
}
} else
{
long double bb = b, sq = d, tu, aa = 2.0*a, r;
sq = sqrt(sq);
r = (-bb - sq)/aa;
se[++x] = r;
r = (-bb + sq)/aa;
se[++x] = r;
}
}
}
}
bool check[2001];
memset(check,0,sizeof(check));
for(i=1; i<=x; i++) if (check[i]==0)
{
for(j=1; j<=x; j++) if (i!=j && fabs(se[i]-se[j])<(1e-6)) check[j] = 1;
res ++;
}
cout<<res;
return 0;
}