#include <bits/stdc++.h>
using namespace std;
#define MAX 100

// Hàm tính toán khoảng cách tối thiểu giữa hai chữ số trên vòng quay
int calcDistance(int pre, int cur) {
    if(pre==cur) {
        return 0;
    } else if(pre<cur && pre!=0) {
        return cur-pre;
    } else {
        return max(abs(pre-cur),10- abs(pre-cur));
    }
}

int main() {
    int t; cin >> t;

    while(t--) {
        string pin; cin >> pin;
        int totalTime=4, previousPin=1; // Bắt đầu từ vị trí số 1, cần 4 lần ấn nút cho 4 chữ số
        for(char it: pin) {
            int currentPin=it-'0'; // Chuyển đổi ký tự sang số
            totalTime+=calcDistance(previousPin, currentPin); // Cộng dồn thời gian di chuyển giữa các số
            previousPin=currentPin; // Cập nhật vị trí số hiện tại
        }
        cout << totalTime<< endl;
    }
    return 0;
}