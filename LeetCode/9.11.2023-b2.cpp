// timf cac ki tu cos diem chung trong chuoi
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        string result="";
        for(int i=0; i<strs[0].size(); i++) {
            
            char currentchar =strs[0][i];
            bool checkj=1;

            for(int j =1; j <strs.size(); j++) {
                bool checkk=0;

                for(int k=0; k<strs[j].size(); k++) {
                    if(currentchar==strs[j][k]) {
                        checkk=1;
                        break;
                }
                }
                if(!checkk) {
                    checkj=0;
                    break;
                }
            }
            if(checkj) {
                result+=currentchar;
            }
        }
    return result;
    }
};

int main() {
    vector<string> strs = {"cir","car"};
    Solution solution;
    string commonPrefix = solution.longestCommonPrefix(strs);
    cout << "Longest common prefix: " << commonPrefix << endl;
} 