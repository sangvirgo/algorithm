#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
BÀI: SỐ CÂN BẰNG 1
Một số X được gọi là số cân bằng nếu trong biểu diễn nhị phân số lượng bit 1 bằng số
lượng bit 0. Viết chương trình nhập vào số X kiểm tra xem phải số cân bằng không
Input
Một dòng duy nhất chứa số nguyên không âm X, giá trị không quá 1018
Output
Xuất ra “YES” hoặc “NO” (viết in hoa)
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n; 
    cin >> n;
    if(n<=2) cout << "NO";
    
    ll count1 = 0, count0 = 0;

    ll temp = n;
    while(temp > 0) {
        if(temp % 2 == 1) {
            count1++;
        } else {
            count0++;
        }
        temp /= 2;
    }


    int total = count1 + count0;
    if(total%2==0 && count1 == count0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
