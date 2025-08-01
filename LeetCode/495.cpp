#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long rs=timeSeries.size()*duration;
        for(int i=0; i<timeSeries.size()-1; i++) {
            if(timeSeries[i]+duration>timeSeries[i+1]) {
                long long temp=timeSeries[i]+duration-timeSeries[i+1];
                rs-=abs(temp);
            }
        }
        return (int)rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<int> temp={1, 2};
cout << a.findPoisonedDuration(temp, 2);
return 0;
}