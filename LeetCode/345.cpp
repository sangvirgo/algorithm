#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    string reverseVowels(string s) {
        int l=0; 
        int r=s.size()-1;
        while(l<r) {
            while(!isVowel(s[l]) && l<r) {
                l++;
            }
            while(!isVowel(s[r]) && l<r) {
                r--;
            }  
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
private:
    bool isVowel(char c) {
        c = tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            return 1;
        } 
        return 0;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.reverseVowels("IceCreAm");
return 0;
}