// https://leetcode.com/problems/length-of-last-word/description/ 
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length=0;
        // xoa cac dau cach o cuoio phan tu
        // Trong hầu hết các ngôn ngữ lập trình, chỉ mục (index) bắt đầu từ 0.
        //  Do đó, nếu bạn có một chuỗi có độ dài là n, các chỉ mục của các ký tự trong chuỗi sẽ là từ 0 đến n-1.
        while (n>0 && s[n-1]==' ')
        {
            n--;
        }
        
        while(n>0 && s[n-1]!=' ') {
            n--;
            length++;
        }
        return length;
    }
};

int main() {
    Solution solution;
    std::string input = "   fly me   to   the moon  ";
    int result = solution.lengthOfLastWord(input);
    std::cout << "Length of last word: " << result << std::endl;

    return 0;
}