#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
/*
Cho số nguyên N và một hoán vị P[] có độ dài 2N, gồm các phần tử {1, 2, …, 2N-1, 2N}. Có 2 loại thao tác:

Đổi chỗ các phần tử P[1] vs P[2], P[3] vs P[4], …, P[2N-1] vs P[N].
Đổi chỗ các phần tử P[1] vs P[N+1], P[2] vs P[N+2], …, P[N] vs P[2N].
Nhiệm vụ của bạn là hãy sử dụng ít phép biến đổi nhất để đưa hoán vị P[] ban đầu về thành một dãy số tăng dần.

Input: 

Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 1000).

Dòng tiếp theo gồm 2N số nguyên P[i] mô tả một dãy hoán vị.

Output: 

In ra số thao tác ít nhất cần sử dụng. Nếu không tìm được đáp án, hãy in ra -1.
*/
// arr[i]>arr[i+1] && 

//1 2 3 4 5 6
bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void option1(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i += 2) {
        swap(arr[i], arr[i+1]);
    }
}

void option2(vector<int>& arr) {
    int n=arr.size()/2;
    for (int i = 0; i < n; i++) {
        swap(arr[i], arr[i+n]);
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n; cin >> n;
int cnt=0;
vector<int> arr(2*n);

for(int i=0; i<2*n; i++) {
    cin >> arr[i];
}

if (isSorted(arr)) {
    cout << 0;
    return 0;
}

while(1) {
    if (cnt % 2 == 0) {
        option1(arr);
    } else {
        option2(arr);
    }
    cnt++;

    if (isSorted(arr)) {
        cout << cnt;
        return 0;
    }
}

cout <<-1;
return 0;
}