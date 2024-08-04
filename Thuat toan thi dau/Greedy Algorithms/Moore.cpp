#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
#define NO_OF_CHAR 256
/*
https://www.geeksforgeeks.org/boyer-moore-algorithm-for-pattern-searching/
*/
void badCharHeuristic(int sizee, string arr, int badChar[NO_OF_CHAR]) {
    for(int i=0; i<NO_OF_CHAR; i++) badChar[i]=-1;
    // Điền giá trị thực tế của lần xuất hiện cuối cùng
    // của một ký tự
    for(int i=0; i<sizee; i++) badChar[(int)arr[i]]=i;
}

void Searchh(string origin, string part) {
    int n=origin.size();
    int m=part.size();
    int badChar[NO_OF_CHAR];

    badCharHeuristic(m, part, badChar);
    int cur=0;

    while(cur<=(n-m)) {
        int j=m-1;
        while(j>=0 && part[j]==origin[cur+j]) j--;
        if(j>0) {
            cur+=max(1, j-badChar[(int)origin[cur+j]]);
        } else {
            cout << "pattern occurs at shift = " << cur<< endl;
            cur+=(cur+m<n)?m-badChar[(int)origin[cur+m]]:1;
        }
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string txt = "ABAAACCDGVHDJKGHSDHGFKJLHSDFJBHFDSJHJDGHJKLSFHLDSFKSRHFSDABCSDFGJSFNJKDSGHACCGSDFJGHJSFGSADFDSGHSJLFJDLSHGSKLDJGSD;FHGSKLDFJGKSDFSKLGNJKVHFJSDFJKLADSHGJKDFHGLSHBFJKLSDNFJLABC";
string pat = "ABC";
Searchh(txt, pat);
return 0;
}