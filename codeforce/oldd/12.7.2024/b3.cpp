#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://codeforces.com/gym/105123/problem/C
*/
bool FlippedADN(char &a , char &b) {
    if(a==b) return true;
    else if((a=='A' && b=='T')|| (b=='A' && a=='T')) return true;
    else if((a=='G' && b=='C')|| (b=='G' && a=='C')) return true;
    else return false;
}


int main() {
int t; cin >> t;
cin.ignore();
string adn1, adn2; cin >> adn1 >> adn2;

for(int i=0; i<8; i++) {
    if(!FlippedADN(adn1[i], adn2[i])) {
        cout << "NO";
        return 0;
    }
}
cout << "YES";
return 0;
}