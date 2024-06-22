#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/
// bool check(vector<string> s) {
//     for(int i=0; i<s.size()-1; i++) {
//         if(s[i]==s[i+1]) return false;
//     }
//     return true;
// }

int main() {
int a, b, c;
cin >> a >> b >> c;
vector<string> result;

// if(a>2*(b+c+1) || b>2*(a+c+1) || c>2*(a+b+1)) {
//     cout << "NO";
//     return 0;
// }

string prev="";

while(a>0 || b>0 || c>0) {
    if(c>0) {
        if(prev=="C") {
            cout << "NO";
            return 0;
        }
    result.push_back("C");
    c--;
    prev="C";
    }


     if(a>0) {
        if(prev=="A") {
            cout << "NO";
            return 0;
        }
        result.push_back("A");
        a--;
        prev="A";
    }
    if(b>0) {
        if(prev=="B") {
            cout << "NO";
            return 0;
        }
        result.push_back("B");
        b--;
        prev="B";
    } 
}

    cout << "YES" << endl;
    for(auto it: result) cout << it;

return 0;
}