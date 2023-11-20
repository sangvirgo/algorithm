#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
đếm số chữ cái trong string cho trước

*/
string to_String(long long n) {
        string s="";
        while(n!=0) {
            s=s+char((n%10)+'0');
            n/=10;
        }
        return s;
}

int main() {
    string s;
    getline(cin, s);
    s = s + '@';
    stack<char> st;
    string str="";
        for(int i(0); i<s.length(); i++) {
            if(st.empty() || st.top()==s[i]) {
                st.push(s[i]);
            }
            else {
                str+=st.top();
                long long count(0);
                while(!st.empty()) {
                    count++;
                    st.pop();
                }
                str+=to_String(count);
                st.push(s[i]);
            }
        }
        cout << str;
return 0;
}