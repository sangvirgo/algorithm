#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Problem D
Hot Hike
/problems/hothike/file/statement/en/img-0001.jpg
Picture by dan lundmark on flickr, cc by
In order to pass time during your vacation, you decided to go on a hike to visit a scenic lake up in the mountains. Hiking to the lake will take you a full day, then you will stay there for a day to rest and enjoy the scenery, and then spend another day hiking home, for a total of three days. However, the accursed weather this summer is ridiculously warm and sunny, and since severe dehydration is not at the top of your priority list you want to schedule the three-day trip during some days where the two hiking days are the least warm. In particular you want to minimize the maximum temperature during the two hiking days.
Given the current forecast of daily maximum temperatures during your vacation, what are the best days for your trip?

Input
The first line of input contains an integer 
 (
), the length of your vacation in days. Then follows a line containing 
 integers 
 (
), where 
 is the temperature forecast for the 
’th day of your vacation.

Output
Output two integers 
 and 
, where 
 is the best day to start your trip, and 
 is the resulting maximum temperature during the two hiking days. If there are many choices of 
 that minimize the value of 
, then output the smallest such 
.

Sample Input 1	Sample Output 1
5
23 27 31 28 30
2 28
Sample Input 2	Sample Output 2
4
30 20 20 30
1 30
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<int> t(n);
for(int i=0; i<n; i++) cin >> t[i];

int resTemp=41, resIndex=-1;

for(int i=0; i<n-2; i++) {
    int temp=max(t[i], t[i+2]);
    if(temp<resTemp) {
        resIndex=i;
        resTemp=min(resTemp, temp);
    }
}

cout<<resIndex+1 << " " << resTemp;
return 0;
}