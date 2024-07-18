#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int64_t> a(k);
  for (int i = 0; i < k; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  int cnt = 0;
  for (int i = 0; i < k - 1; i++)
  {
    cnt += 2 * a[i] - 1;
  }
  cout << cnt << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll test;
  cin >> test;
  while (test--)
  {
    solve();
  }
  return 0;
}