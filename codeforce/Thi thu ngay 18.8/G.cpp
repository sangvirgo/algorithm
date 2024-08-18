#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*
BÀI 5G - BỂ CHỨA NƯỚC

Tí có một chiếc bể cá cũ được cấu tạo từ N cột đá, cột đá thứ i có chiều cao là H[i]. Khi đổ nước vào bể, nước ở trong bể sẽ được giữ lại khi ở bên trái và bên phải của bể có một cột đá khác có thể chặn lượng nước đó, nếu không thì nước sẽ trào ra ngoài bể.

Tí có thể chi ra tối đa là K đồng để nâng cấp bể cá này. Tí có thể chi 1 đồng cho mỗi một viên đá có kích thước 1x1 và đặt viên đá ấy ở trên cùng của một cột đá bất kì tăng độ của cột đá đó lên.

Các bạn hãy giúp Tí tìm một giải pháp nâng cấp tối ưu sao cho bể cá mới có thể chứa được nhiều nước nhất có thể!

Input:

Dòng đầu tiên là hai số nguyên N và K (1 ≤ N, K ≤ 12).

Dòng tiếp theo gồm N số nguyên H[i] (1 ≤ H[i] ≤ 10^9).

Output: 

In ra một số nguyên duy nhất là lượng nước tối đa bể có thể chứa sau khi tu sửa.

Example:

Input

Output

9 2

1 4 1 2 2 4 1 2 1

11

 

 

5 2

1 1 1 1 1

3

 

 

Z

2Q==

 

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
*/
int calcWater(vector<int> &heights) {
    int n=heights.size();
    if(n<=1) return 0;

    vector<int> maxL(n), maxR(n);
    maxL[0] = heights[0]; maxR[n-1] = heights[n-1];
    for(int i=1; i<n; i++) {
        maxL[i]=max(heights[i], maxL[i-1]);
    }
    for(int i=n-2; i>=0; i--) {
        maxR[i]=max(heights[i], maxR[i+1]);
    }

    int water=0;
    for(int i=0; i<n; i++) {
        water+=min(maxL[i], maxR[i])-heights[i];
    }
    return water;
}

void backTracking(vector<int>& arr, int& water, int k, int idx=0) {
    if(k==0 || idx==arr.size()) {
        water=max(water, calcWater(arr));
        return;
    }

    for(int i=idx; i<arr.size(); i++) {
        arr[i]++;
        backTracking(arr, water, k-1, i);
        arr[i]--;
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int n, k; cin >> n >> k;
vector<int> arr(n);
for(int i=0; i<n; i++) {
    cin >> arr[i];
}

int water=calcWater(arr);
backTracking(arr, water, k);
cout << water;
return 0;
}