#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    string toHex(int num) {
    // Sử dụng std::stringstream để định dạng đầu ra
    std::stringstream ss;
    
    // std::hex sẽ định dạng số tiếp theo dưới dạng hexa
    // (unsigned int)num để đảm bảo biểu diễn 2's complement cho số âm được xử lý đúng
    ss << std::hex << (unsigned int)num; 
    
    return ss.str();
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}