#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/roman-to-integer/
*/

class Solution {
public:

    map<char, int> romanNumerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };


    int romanToInt(string s) {
        int sum=0;
        for(int i=0; i<s.length(); i++) {
            (romanNumerals[s[i]] < romanNumerals[s[i+1]]) ? sum-=romanNumerals[s[i]] : sum+=romanNumerals[s[i]];
        }
        return sum;
    }
};

int main() {

string s = "IV";
Solution a;

cout << a.romanToInt(s);

return 0;
}