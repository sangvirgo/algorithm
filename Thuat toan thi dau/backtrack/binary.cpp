#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*

*/
string binaryString="";
int n; 

void Try(int pos) {
    for(char i='0'; i<='1'; i++) {
        binaryString.push_back(i);
        if(pos==n) {
            cout << binaryString << endl;
        } else {
            Try(pos+1);
        }
        binaryString.pop_back();
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; cin >> t;

while(t--) {
    cout << "Enter n: "; cin >> n;
    binaryString="";
    Try(1);
}
return 0;
}