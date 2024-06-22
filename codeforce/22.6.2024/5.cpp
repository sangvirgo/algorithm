#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int minimum_boxes_left(int n, vector<int>& boxes) {
    // Sắp xếp các hộp theo chiều dài cạnh tăng dần
    sort(boxes.begin(), boxes.end());
    
    // Sử dụng stack để duyệt và loại bỏ các hộp có thể chứa được
    stack<int> stk;
    
    for (int i = 0; i < n; ++i) {
        int box = boxes[i];
        // Kiểm tra các hộp trên stack có thể chứa được hộp hiện tại không
        while (!stk.empty() && stk.top() >= box) {
            stk.pop();
        }
        // Thêm hộp hiện tại vào stack
        stk.push(box);
    }
    
    // Số hộp còn lại là độ dài của stack
    return stk.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> boxes(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> boxes[i];
    }
    
    // Gọi hàm tính số hộp còn lại và in ra kết quả
    int result = minimum_boxes_left(n, boxes);
    cout << result << endl;
    
    return 0;
}
