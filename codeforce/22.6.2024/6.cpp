#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
387
837
738

7583
8753

*/
int findStep(int data) {
    if(data%2==0) return 0;
    string s=to_string(data);
    int lengthNum=s.length();

    if((s[0]-'0')%2==0) return 1;

    for(int i=1; i<lengthNum; i++) {
        if((s[i]-'0')%2==0) return 2;
    }

    return -1;
}

int main() {
int n; cin >> n;
while(n--) {
    int x; cin >> x;
    cout << findStep(x) << endl;
}
return 0;
}