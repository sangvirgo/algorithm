#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
Mr X. có ba cửa hàng cùng bán thiết bị điện tử. Ông ấy đã gán ID cho mỗi dòng sản phẩm là một dãy 6 chữ số (có thể bắt đầu bởi các chữ số 0). Mỗi giao dịch bán hàng được lưu lại dưới dạng ID kèm theo số lượng. Sau đó được thống kê theo từng ngày.

Mr X. rất muốn biết danh sách các mặt hàng đã bán được từ 20 đơn vị trở lên ở cả 3 cửa hàng trong ngày hôm qua.

Input

Dòng đầu ghi ba số 0 < n1, n2, n3 < 200 là số lượng các giao dịch trong ngày hôm qua tại từng cửa hàng.

Tiếp theo đó là một số dòng ghi lần lượt n1 + n2 + n3 giao dịch trong ngày hôm qua, mỗi giao dịch có ID và số lượng cách nhau một khoảng trống. Do thiết bị điện tử không hề rẻ nên giới hạn cho các giao dịch đơn lẻ là không quá 100 đơn vị.

Output

Ghi ra  số m là số lượng các mặt hàng đã bán được từ 20 đơn vị trở lên trong cả ba cửa hàng.

Sau đó lần lượt là m giá trị ID của các mặt hàng thỏa mãn, đượt liệt kê theo thứ tự xuất hiện trong input.
Ví dụ

Input

Output

5 2 4

123682 20 239481 23 001238 5 738299 4 001238 17

001238 31 123682 25

239481 25 123682 22 909090 18 001238 27

2 123682 001238

 
*/
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL); 

int a, b, c; cin >> a>> b >>c;
map<string, vector<int>> temp;
vector<string> items;
vector<string> result;

for (int i = 0; i < a; ++i) {
    string id;
    int amount;
    cin >> id >> amount;
    if(temp.find(id) == temp.end()) {
        items.push_back(id);
        temp[id] = vector<int>(3, 0);
    }
    temp[id][0] += amount;
}

for (int i = 0; i < b; ++i) {
    string id;
    int amount;
    cin >> id >> amount;
    if(temp.find(id) == temp.end()) {
        items.push_back(id);
        temp[id] = vector<int>(3, 0);
    }
    temp[id][1] += amount;
}

for (int i = 0; i < c; ++i) {
    string id;
    int amount;
    cin >> id >> amount;
    if(temp.find(id) == temp.end()) {
        items.push_back(id);
        temp[id] = vector<int>(3, 0);
    }
    temp[id][2] += amount;
}

for (const string& id : items) {
    if(temp[id][0] >= 20 && temp[id][1] >= 20 && temp[id][2] >= 20) {
        result.push_back(id);
    }
}  

cout << result.size() ;
for(auto it : result) cout << " " << it;
return 0;
}