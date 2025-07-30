#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        vector<string> storeString;
        string token="";
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i]!='-') {
                token+=toupper(s[i]);
                if(token.size()==k) {
                    reverse(token.begin(), token.end());
                    storeString.push_back(token);
                    token="";
                }
            }
        }
        reverse(token.begin(), token.end());
        storeString.push_back(token);
        string rs="";
        for(int i=storeString.size()-1; i>=0; i--) {
            if(storeString[i]!="") {
                rs+=storeString[i];
                if(i) {
                    rs+="-";
                }
            }
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string s="5F3Z-2e-9-w";
string ss="2-5g-3-J";
// cout << s.substr(10) << endl;
Solution a;
// cout << a.licenseKeyFormatting(ss, 2);
cout << a.licenseKeyFormatting(s, 4);

return 0;
}










/*
        vector<string> storeString;
        string temp="";
        int start=0, end=s.find("-");
        while(end!=string::npos) {
            temp=s.substr(start, end-start);
            storeString.push_back(temp);
            start=end+1;
            end=s.find("-", start);
        }
        storeString.push_back(s.substr(start));
        for(auto it:storeString) {
            cout << it << endl;
        }
        return "";
*/