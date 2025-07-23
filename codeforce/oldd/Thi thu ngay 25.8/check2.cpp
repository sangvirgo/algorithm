#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Đề bài dịch và giải thích:
Bài toán: Đếm số nghiệm của một phương trình đặc biệt

Đề bài chi tiết:

Mô tả bài toán:

Chúng ta đang xét một loại phương trình đặc biệt có dạng:

(A₁x² + B₁x + C₁)(A₂x² + B₂x + C₂) ... (Aₙx² + Bₙx + Cₙ) = 0
Trong đó:

Aᵢ, Bᵢ, Cᵢ là các số nguyên cho trước.
x là ẩn số.
Phương trình này được tạo thành từ tích của n đa thức bậc hai.
Ví dụ:

Phương trình (2x² - 4x + 2)(3x² + 2x + 1) = 0 chỉ có một nghiệm là x = 1.
Phương trình (2x² + 5x + 3)(3x² + 4x + 1) = 0 có 3 nghiệm là x = -3/2, x = -1, x = -1/3.
Phương trình (0x² + 1x - 1)(0x² + 1x - 2)(0x² + 2x - 2) = 0 có 2 nghiệm là x = 1, x = 2.
Yêu cầu:

Input:
Dòng đầu tiên: Số nguyên dương n (số lượng đa thức bậc hai).
n dòng tiếp theo: Mỗi dòng chứa 3 số nguyên Aᵢ, Bᵢ, Cᵢ tương ứng với hệ số của một đa thức bậc hai.
Output:
In ra số nghiệm của phương trình.
Nếu phương trình có vô số nghiệm, in ra -1.
Điều kiện:

1 ≤ n ≤ 1000
|Aᵢ|, |Bᵢ|, |Cᵢ| ≤ 1000
Ví dụ Input/Output:

Input	Output
1 2 5 3	2
2 0 1 1 1 2 1	1




3
0 1 -1 
0 1 -2
0 2 -2

2
2 5 3
3 4 1

2
2 -4 2
3 2 1
*/
class Equation {
    public: 
        int a, b, c;
        void Solution();
        static set<long double> res;
};
 
void Equation::Solution() {
    if (a != 0) {
        int delta = b * b - 4 * a * c;
        if (delta < 0) return; 
        if (delta == 0) {
            res.insert((long double)-b / (2 * a));
        } else {
            res.insert((long double)((-b - sqrt(delta)) / (2 * a)));
            res.insert((long double)((-b + sqrt(delta)) / (2 * a)));
        }
    } 
    else if(a==0 && b!=0) {
        res.insert((long double)-c/b);
    } else if(a==0 && b==0 ) {
        return;
    }
}
set<long double> Equation::res;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
vector<Equation> eqs(n);

for(int i=0; i<n; i++) {
    cin >> eqs[i].a >> eqs[i].b >> eqs[i].c;
}

for(int i=0; i<n; i++) {
    eqs[i].Solution();
}

if(Equation::res.size()==0) cout<< -1;
else cout << Equation::res.size();

// for(auto it: Equation::res) {
//     cout << it << " ";
// }
return 0;
}