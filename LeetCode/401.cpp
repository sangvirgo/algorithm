#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> bitOne(61, 0);
        vector<string> rs;
        for(int i=1; i<=60; i++) {
            int temp=i;
            int cnt=0;
            while(temp>0) {
                if(temp%2==1) cnt++;
                temp/=2;
            }
            bitOne[i]=cnt;
        }

        for(int i=0; i<=11; i++) {
            for(int j=0; j<=59; j++) {
                if(bitOne[i]+bitOne[j]==turnedOn) {
                    rs.push_back(handleMinuteAndHour(i, j));
                }
            }
        }
        return rs;
    }
private:
    string handleMinuteAndHour(int hour, int minute) {
        string rs="";
        rs+=to_string(hour);
        rs+=":";
        if(minute<10) {
            rs+="0" + to_string(minute);
        } else {
            rs+=to_string(minute);
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution a;
vector<string> rs=a.readBinaryWatch(3);
for(auto it:rs) {
    cout << it << " ";
}

return 0;
}