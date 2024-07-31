#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
https://www.spoj.com/problems/LASTDIG/
*/
int theLastDigits(int a, int b) {
    vector<int> cycles[10]={
        {0},
        {1},
        {2, 4, 6, 8},
        {3, 9, 7, 1}, 
        {4, 6},
        {5},
        {6},
        {7, 9, 3, 1},
        {8, 4, 2, 6},
        {9, 1}};
    int theLast=a%10;
    vector<int> cycle=cycles[theLast];
    int cycleOfNum=cycle.size();

    if(b==0) return 1;

    int temp=(b-1)%cycleOfNum;

    return cycle[temp];
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;
while(t--) {
    int a, b; cin >> a >> b;
    cout << theLastDigits(a, b) << endl;

}
return 0;
}