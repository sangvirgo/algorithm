#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/



class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word) {
            words.push_back(word);
        }
        if(words.size() != pattern.size()) {
            return 0;
        }

        map<char, string> m1;
        map<string, char> m2;
        for(int i=0; i<pattern.size(); i++) {
            if(m1.count(pattern[i])) {
                if(m1[pattern[i]]!=words[i]) return 0;
            }
            
            if(m2.count(words[i])) {
                if(m2[words[i]]!=pattern[i]) return 0;
            } 

            m1[pattern[i]]=words[i];
            m2[words[i]]=pattern[i];
        }
        return 1;
    }
};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.wordPattern("abba", "dog cat cat dog");
return 0;
}