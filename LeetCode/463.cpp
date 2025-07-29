#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int edge=0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j]) {
                    edge+=4;
                    int north=i-1;
                    int south=i+1;
                    int west=j-1;
                    int east=j+1;
                    if(north<grid.size() && north>=0 && grid[north][j]) edge--;
                    if(south<grid.size() && south>=0 && grid[south][j]) edge--;
                    if(west<grid[i].size() && west>=0 && grid[i][west]) edge--;
                    if(east<grid[i].size() && east>=0 && grid[i][east]) edge--;
                }
            }
        }
        return edge;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}