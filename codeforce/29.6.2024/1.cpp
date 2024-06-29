#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/
vector<pair<int, int>> point(2);



int main() {
for(int i=0; i<=1; i++) {
    int x, y; cin >> x >> y;
    point[i]=make_pair(x, y);
}

double distance= sqrt(pow((point[1].first-point[0].first), 2)+pow((point[1].second-point[0].second), 2));


cout  << fixed<< setprecision(12) << distance;
return 0;
}