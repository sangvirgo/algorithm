#include <bits/stdc++.h>
using namespace std;
#define MAX 21
/*
Alice đang có a
 cái kẹo, Alice được mẹ cho thêm b
 cái kẹo. Hỏi Alice có tổng cộng bao nhiêu cái kẹo?

Input
Hai số nguyên a,b
 – số cái kẹo như đề bài (a,b≤1019)
Output
Một số nguyên duy nhất là đáp án của đề bài.
*/

void addCarry(char a[], char b[]) {
    int lensA=strlen(a), lensB=strlen(b), n=0;
    int x[lensA]={0}, y[lensA]={0}, result[MAX+1];
    for(int i=0; i<lensA; i++) x[i]=a[lensA-1-i]-'0';
    for(int i=0; i<lensB; i++) y[i]=b[lensB-1-i]-'0';

    int carry=0;    
    int maxLens=max(lensA, lensB);
    for(int i=0; i<maxLens; i++) {
        int temp=x[i]+y[i]+carry;
        result[n++] = temp%10;
        carry=temp/10;
    }
    if(carry) result[n++]=carry;

    for(int i=n-1; i>=0; i--) {
        cout << result[i];
    }
}

int main() {
unsigned long long x, y;
cin >> x >> y;

string strA=to_string(x);
string strB=to_string(y);
char a[MAX], b[MAX];
strcpy(a, strA.c_str());
strcpy(b, strB.c_str());
addCarry(a, b);
return 0;
}


