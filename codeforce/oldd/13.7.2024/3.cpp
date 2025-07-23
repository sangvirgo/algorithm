#include <bits/stdc++.h>
using namespace std;
#define C 12
#define H 1
#define O 16

/*
https://www.spoj.com/PTIT/problems/PTIT121E/


CH(CO2H)3
*/
int main() {
string s; cin >> s;
stack<int> digits;
int result=0;


for(int i=0; i<s.length(); i++) {
    if(s[i]=='(') digits.push(0); 
    else if(s[i]==')') {
        int temp=0;
        while(!s.empty() && digits.top()!=0) {
            temp+=digits.top();
            digits.pop();
        }
        digits.pop();
        digits.push(temp);
    } else if(isdigit(s[i])) {
        int digit=s[i]-'0';
        if(!s.empty()) {
            int temp=digit*digits.top();
            digits.pop();
            digits.push(temp);
        }
    } else if(s[i]=='C') {
        digits.push(12);
    } else if(s[i]=='O') {
        digits.push(16);
    } else if(s[i]=='H') {
        digits.push(1);
    }
}

while(!digits.empty()) {
    result+=digits.top();
    digits.pop();
}

cout << result;
return 0;
}