#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> line1= {'q','w','e','r','t','y','u','i','o','p'};
        set<char> line2={'a','s','d','f','g','h','j','k','l'};
        set<char> line3={'z','x','c','v','b','n','m'};
        vector<string> rs;
        for(auto it:words) {
            string word=it;
            bool ok=1;
            if(line1.count(tolower(word[0]))) {
                for(int i=1; i<word.size(); i++) {
                    if(!line1.count(tolower(word[i]))) {
                        ok=0;
                        break;
                    }
                }
            }
            if(line2.count(tolower(word[0]))) {
                for(int i=1; i<word.size(); i++) {
                    if(!line2.count(tolower(word[i]))) {
                        ok=0;
                        break;
                    }
                }
            }
            if(line3.count(tolower(word[0]))) {
                for(int i=1; i<word.size(); i++) {
                    if(!line3.count(tolower(word[i]))) {
                        ok=0;
                        break;
                    }
                }
            }
            if(ok) rs.push_back(word);
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<string> temp={"Hello","Alaska","Dad","Peace"};
vector<string> rs=a.findWords(temp);
for(auto it:rs) {
    cout << it << endl;
}
return 0;
}