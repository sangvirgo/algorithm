#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

Input
The first line of input contains single integer t
 (1≤t≤64
) — the number of test cases. The descriptions of test cases follow.

Each test case contains one string of two characters, description of the square where rook is positioned. The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

The same position may occur in more than one test case.

Output
For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.

You can output squares in any order per test case.

Example
inputCopy
1
d5
outputCopy
d1
d2
b5
g5
h5
d3
e5
f5
d8
a5
d6
d7
c5
d4The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

Input
The first line of input contains single integer t
 (1≤t≤64
) — the number of test cases. The descriptions of test cases follow.

Each test case contains one string of two characters, description of the square where rook is positioned. The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

The same position may occur in more than one test case.

Output
For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.

You can output squares in any order per test case.

Example
inputCopy
1
d5
outputCopy
d1
d2
b5
g5
h5
d3
e5
f5
d8
a5
d6
d7
c5
d4
*/




int main() {
int t; cin >> t;
cin.ignore();
while(t--) {
    string s; cin >> s;
    char column=s[0];
    int row=s[1]-'0';

    for(int i=1; i<9; i++) {
        if(i==row) continue;
        cout << column << i << endl;
    }
    for(int i=97; i<105; i++) {
        char temp= static_cast<char>(i);
        if(temp==column) continue;
        cout << temp << row<< endl;
    }
}
return 0;
}