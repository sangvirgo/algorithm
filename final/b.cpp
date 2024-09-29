#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/
bool divisible(int n, string digits){
    ll sum=0;
    for(char c: digits) {
        sum=sum*10+(c-'0');
        if(sum%n==0) {
            return true;
        }
    }
    return false;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}