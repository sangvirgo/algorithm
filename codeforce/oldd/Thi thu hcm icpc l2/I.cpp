#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
ĐOÁN SỐ
Thầy giáo ra trò chơi như sau: thầy sẽ viết lên bảng 4 số tự nhiên bao gồm a,
b, a+b, a-b lên bảng nhưng thứ tự bị xáo trộn và cho học sinh đoán giá trị của a và
b. Trò chơi của Thầy sẽ có T vòng, hãy lập trình tìm giá trị của a và b trong T vòng
đó.
Input:
• Dòng đầu tiên là T, số vòng chơi của thầy (T≤10).
• T dòng tiếp theo, mỗi dòng gồm 4 số tự nhiên được mô tả theo đề bài, mỗi
số có giá trị không quá 100.
Output: Gồm T dòng, mỗi dòng là hai số tự nhiên a, b thỏa mãn, nếu không thể
tìm được a và b, in ra -1 trên dòng đó.
Ví dụ:
Input
3
2110
2315
1111
Output
11
32
-1
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<int> v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        bool found=false;
        do {
            int a=v[2];
            int b=v[3];
            if((a+b==v[0]&& a-b==v[1]) || (a-b==v[0]&& a+b==v[1])){
                found=true;
                cout<< a << " " << b << endl;
                break;
            }
        } while(next_permutation(v.begin(), v.end()));

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
