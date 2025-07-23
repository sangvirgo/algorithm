#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://www.spoj.com/PTIT/problems/PTIT121L/
*/
struct HCN {
    int length, width;
};


int main() {
vector<HCN> hcn(3);
int canhChung=0;
for(int i=0; i<3; i++) {
    cin >> hcn[i].length >> hcn[i].width;
}

for(int i=0; i<2; i++) {
    if(((hcn[i].length!=hcn[i+1].length) && (hcn[i].length!=hcn[i+1].width)) || ((hcn[i].width!=hcn[i+1].length) && (hcn[i].width!=hcn[i+1].width))) {
        cout << 0;
        return 0;
    } else if(hcn[i].length==hcn[i+1].width || hcn[i].width==hcn[i+1].length) {
        swap(hcn[i+1].length, hcn[i+1].width);
        canhChung=(hcn[i].length==hcn[i+1].width)?hcn[i].length: hcn[i].width;
    }
}

cout << canhChung;
return 0;
}