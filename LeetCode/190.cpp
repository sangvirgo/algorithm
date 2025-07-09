#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bits(n);
        string binary_string = bits.to_string();
        uint32_t rs=0;
        for(int i=0; i<binary_string.length(); i++) {
            int bit_value = binary_string[i] - '0'; 
            rs+=bit_value*pow(2, i);
        }
        return rs;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
cout << a.reverseBits(0b00000010100101000001111010011100);
return 0;
}