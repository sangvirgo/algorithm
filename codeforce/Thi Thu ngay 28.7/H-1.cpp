#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, int> mp;

void gen(int n) {
  vector<int> vt(n * 2);

  for (int i = 0; i < vt.size(); i++) {
    // cout << i + 1 << endl;
    vt[i] = i + 1;
  }

  string k = "";
  for (int i = 0; i < vt.size(); i++) {
    k += to_string(vt[i]);
  }

  mp[k] = 0;

  if (n % 10 == 0) {
    for (int i = 0; i < 4; i++) {
      if (i % 2 == 0) {
        for (int k = 0; k < vt.size() - 1; k += 2) {
          swap(vt[k], vt[k + 1]);
        }
      } else {
        for (int k = 0; k < vt.size() / 2; k++) {
          swap(vt[k], vt[k + vt.size() / 2]);
        }
      }

      string s = "";
      for (int i = 0; i < vt.size(); i++) {
        s += to_string(vt[i]);
      }

      if (mp.find(s) == mp.end()) {
        mp[s] = i + 1;
      }
    }
  } else {

    for (int i = 0; i < vt.size() - 1; i++) {
      if (i % 2 == 0) {
        for (int k = 0; k < vt.size() - 1; k += 2) {
          swap(vt[k], vt[k + 1]);
        }
      } else {
        for (int k = 0; k < vt.size() / 2; k++) {
          swap(vt[k], vt[k + vt.size() / 2]);
        }
      }

      string s = "";
      for (int i = 0; i < vt.size(); i++) {
        s += to_string(vt[i]);
      }

      if (mp.find(s) == mp.end()) {
        mp[s] = i + 1;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  gen(n);

  string s = "";
  for (int i = 0; i < n * 2; i++) {
    int a;
    cin >> a;
    s += to_string(a);
  }

  if (mp.find(s) == mp.end()) {
    cout << -1 << endl;
  } else {
    int tmp = mp[s];
    if (n % 10 != 0) {
      tmp = min(tmp, n * 2 - tmp);
    } else {
      tmp = min(tmp, 4);
    }
    cout << tmp;
  }
}
