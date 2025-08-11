#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
 *
 */

class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    for (int i = 0; i < 9; ++i) {
      std::set<char> check;
      for (int j = 0; j < 9; ++j) {
        if (board[i][j] != '.') {
          if (check.count(board[i][j]))
            return false;
          check.insert(board[i][j]);
        }
      }
    }
    for (int i = 0; i < 9; i++) {
      set<char> check;
      for (int j = 0; j < 9; j++) {
        if (board[j][i] != '.') {
          if (check.count(board[j][i]))
            return 0;
          check.insert(board[j][i]);
        }
      }
    }

    for (int i = 0; i < 9; i += 3) {
      for (int j = 0; j < 9; j += 3) {
        set<char> check;

        for (int k = i; k < i + 3; k++) {
          for (int h = j; h < j + 3; h++) {
            if (board[k][h] != '.') {
              if (check.count(board[k][h]))
                return 0;
              check.insert(board[k][h]);
            }
          }
        }
      }
    }
    return 1;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
