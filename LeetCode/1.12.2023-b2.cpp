// https://leetcode.com/problems/minimum-speed-to-arrive-on-time/description/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
class Solution {
public:
    bool check(vector<int>& dist, int speed, double hour) {
        double ans=0;

        for(int i=0; i<dist.size(); i++) {
            double cost=dist[i]*1.00/speed;
            ans+=(i==dist.size()-1 ? cost : ceil(cost));
        }
        return ans<=hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=0; int r=1e7;
        while (l<r)
        {
            int mid=(l+r) >> 1;
            if(check(dist, mid, hour)) {
                r=mid;
            }
            else {
                l=mid+1;
            }
        }
        return check(dist, l, hour) ? l : -1;
    }
};

int main() {
    Solution a;
    vector<int> dist1 = {1, 3, 2};
    double hour1 = 6.0;
    cout << "Output 1: " << a.minSpeedOnTime(dist1, hour1) << endl;

    vector<int> dist2 = {1, 3, 2};
    double hour2 = 2.7;
    cout << "Output 2: " << a.minSpeedOnTime(dist2, hour2) << endl;

    vector<int> dist3 = {1, 3, 2};
    double hour3 = 1.9;
    cout << "Output 3: " << a.minSpeedOnTime(dist3, hour3) << endl;


    return 0;
}