#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/PTIT121I/

Input:
2
1 3 ABC
2 5 /HTP

Output:
1 AAABBBCCC

2 /////HHHHHTTTTTPPPPP
*/



int main() {
int t; cin >> t;
while(t--) {
    int stt; cin >> stt;
    int n; cin >> n;
    cin.ignore();
    string s; cin >> s;
    string result;

    for(char c: s) {
        result+=string(n, c);
    }

    cout <<endl << stt << " " << result;
}
return 0;
}