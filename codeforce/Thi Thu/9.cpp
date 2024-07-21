#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000
#define intmax 4294967295 
/*

*/
bool isNumber(const string &s) {
    if(s.size()<10 || s.size()>18) return false;
    for(char c: s) {
        if(!isdigit(c) || c==' ') {
            return false;
        }
    }
    return true;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

unsigned ll result=0;
string line; 

while(getline(cin, line)) {
    // if(line.empty()) break;
    stringstream ss(line);
    string word;

    while(ss>>word) {
        if(isNumber(word)) {
            result+=stoll(word);
        }
    }
}
cout << result;
return 0;
}