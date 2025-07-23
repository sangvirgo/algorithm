#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*

*/
int main() {
    string s, son, tung;
    getline(cin, s);
    stringstream ss(s);
    ss>>son>> tung;

    if(son==tung) {
        cout << "SonTung";
    } else if((son=="keo" && tung=="bao") || (son=="bua" && tung =="keo") || (son=="bao" && tung=="bua")) {
        cout << "Son";
    } else {
        cout << "Tung";
    }
return 0;
}