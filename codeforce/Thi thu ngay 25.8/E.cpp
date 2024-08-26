#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 6E - XÂU ANAGRAM

Một xâu A được gọi là xâu Anagram của xâu B nếu như ta có thể thu được xâu A bằng một số phép đổi chỗ các kí tự trên xâu B.

Ví dụ: “listen” là một anagram của “silent”.

Cho N xâu phân biệt S[1], S[2], …, S[N]. Nhiệm vụ của bạn là hãy đếm số lượng cặp chỉ số (i, j) thỏa mãn S[i] là xâu Anagram của S[j].

Input:

Dòng đầu tiên là số lượng xâu N (1 ≤ N ≤ 100000).

N dòng tiếp theo, mỗi dòng gồm một xâu có đúng 10 kí tự, tất cả các kí tự đều là chữ cái thường.

Output:

In ra một số nguyên duy nhất là đáp số của bài toán.

Test ví dụ:

Input

Output

3

listenaaaa

aaaasilent

bbbbbbbbbb

1

 

2

aaaaaaaaaa

bbbbbbbbbb

0

5

abaaaaaaaa

ccccccxccc

aaaaaaaaba

cccccccccx

aaaabaaaaa
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<string> s(n);
map<string, int> mp;
set<string> st;
for (int i = 0; i < n; i++) {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
    mp[s[i]]++;
    st.insert(s[i]);
}

int res=0;
for(auto it: st) {
    res += mp[it] * (mp[it] - 1) / 2;
}
cout << res;
return 0;
}