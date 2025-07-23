#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Recently, Tema and Vika celebrated Family Day. Their friend Arina gave them a carpet, which can be represented as an n⋅m
 table of lowercase Latin letters.

Vika hasn't seen the gift yet, but Tema knows what kind of carpets she likes. Vika will like the carpet if she can read her name on. She reads column by column from left to right and chooses one or zero letters from current column.

Formally, the girl will like the carpet if it is possible to select four distinct columns in order from left to right such that the first column contains "v", the second one contains "i", the third one contains "k", and the fourth one contains "a".

Help Tema understand in advance whether Vika will like Arina's gift.

Input
Each test consists of multiple test cases. The first line of input contains a single integer t
 (1≤t≤100
) — the number of test cases. Then follows the description of the test cases.

The first line of each test case contains two integers n
, m
 (1≤n,m≤20
) — the sizes of the carpet.

The next n
 lines contain m
 lowercase Latin letters each, describing the given carpet.

Output
For each set of input data, output "YES" if Vika will like the carpet, otherwise output "NO".

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.


*/
int main() {
int t; cin >> t;

while(t--) {
    int n, m; cin >> n >>m;
    vector<string> carpet(n);
    string nameNeedFind="vika";
    int k=0;

    for(int i=0; i<n; i++) {
        cin >>carpet[i];
    }

    for(int i=0; i<m && k<4; i++) {
        for(int j=0; j<n; j++) {
            if(carpet[j][i]==nameNeedFind[k]) {
                k++;
                break;
            }
        }
    }

    if(k==4) cout << "YES" << endl;
    else cout << "NO" << endl;
}
return 0;
}