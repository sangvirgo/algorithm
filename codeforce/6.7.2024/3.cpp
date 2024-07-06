#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
số palindrome là số mà đọc ngược hay đọc xuôi đều giống nhau, ví dụ: 12321,2442,10201,.... Nhưng Số 123123, 1000, 554,... không phải là số palindrome

Input
Dòng đầu tiên chứa số test T (1<=T<=10) T dòng tiếp theo, chứa số nguyên N (1<=N<=10^5)

Output
Với mỗi test, xuất ra trên 1 dòng số palindrome bé nhất và lớn hơn N.
*/
bool isPalindrome(int x) {
    if(x<10) return true;
    int temp=x, sum=0;
    while(temp) {
        sum=sum*10+temp%10;
        temp/=10;
    }
    return sum==x;
}

int findNearestPalindrome(int x) {
    int upper=x+1;
    while(true) {
        if(isPalindrome(upper)) return upper;
        upper++;
    }
}

int main() {
int t; cin >> t;
while(t--) {
    int x; cin >> x;
    cout << findNearestPalindrome(x) << endl;
}
return 0;
}