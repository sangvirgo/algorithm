#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  vector<vector<int>> sortMatrix(vector<vector<int>> &grid) {
    vector<vector<int>> diagonals;
    int n = grid.size();
    int count = 0, i = 0, j = 0;
    while (count < n * 2 - 1) {
      if (count < n) {
        i = 0, j = n - 1 - count;
        vector<int> temp;
        while (i < n && j < n) {
          temp.push_back(grid[i][j]);
          i++;
          j++;
        }
        diagonals.push_back(temp);
      } else {
        i = count - n + 1;
        vector<int> temp;
        j = 0;
        while (i < n && j < n) {
          temp.push_back(grid[i][j]);
          i++;
          j++;
        }
        diagonals.push_back(temp);
      }
      count++;
    }

    for (i = 0; i < diagonals.size(); i++) {
      if (i < n - 1) {
        sort(diagonals[i].begin(), diagonals[i].end());
      } else {
        sort(diagonals[i].begin(), diagonals[i].end(), greater<int>());
      }
    }

    count = 0, i = 0, j = 0;
    while (count < n * 2 - 1) {
      int idx = 0;
      if (count < n) {
        i = 0, j = n - 1 - count;
        vector<int> temp = diagonals[count];
        while (i < n && j < n) {
          grid[i][j] = temp[idx];
          i++;
          j++;
          idx++;
        }
      } else {
        i = count - n + 1;
        vector<int> temp = diagonals[count];
        j = 0;
        while (i < n && j < n) {
          grid[i][j] = temp[idx];
          i++;
          j++;
          idx++;
        }
      }
      count++;
    }
    return grid;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution a;
  vector<vector<int>> temp = {{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};
  vector<vector<int>> rs = a.sortMatrix(temp);
  for (auto it : rs) {
    for (auto i : it) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
