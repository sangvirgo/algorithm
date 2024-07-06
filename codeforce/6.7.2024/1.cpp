#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
Tìm số nguyên tố gần X nhất.

Input
Một dòng duy nhất chứa số nguyên X (1<=X<=100)

Output
Một số nguyên tố gần X nhất. Nếu có nhiều kết quả thì xuất bất kỳ
*/
bool isPrime(int x) {
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++) {
        if(x%i==0) return false;
    }
    return true;
}

int main() {
int data;
cin >> data;
if(data<2) {
    cout << 2;
    return 0;
}
int res=10, result;
vector<int> Primee;
for(int i=data-5; i<data+5; i++) {
    if(isPrime(i)) {
        if(res>(abs(data-i))) {
            res=abs(data-i);
            result=i;
        }
    }
}
cout << result;
return 0;
}