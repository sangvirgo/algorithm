#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rs;
        if(numRows==0) return rs;
        rs.push_back({1});

        for(int i=1; i<numRows; i++) {
            vector<int> new_row;
            new_row.push_back(1);
            vector<int> pre_row=rs[i-1];

            for(int j=1; j<i; j++) {
                new_row.push_back(pre_row[j] + pre_row[j-1]);
            }

            new_row.push_back(1);
            rs.push_back(new_row);
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<vector<int>> rs=a.generate(22);

for (const auto& row : rs) {
        // Vòng lặp trong duyệt qua từng phần tử trong hàng đó
    for (const auto& element : row) {
        std::cout << element << " ";
    }
    std::cout << std::endl; // Xuống dòng sau mỗi hàng
    }
return 0;
}