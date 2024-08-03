#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
const int MOD = 1e9 + 7;
/*
https://wiki.vnoi.info/algo/basic/sorting#s%E1%BA%AFp-x%E1%BA%BFp-n%E1%BB%95i-b%E1%BB%8Dt-bubble-sort
*/
vector<ll> createRamdomArray(ll n) {
    vector<ll> arr(n);
    srand(time(0));
    for(ll i=0; i<n; i++) {
        arr[i]=1+(rand()%MAX);
    }
    return arr;
}

vector<ll> temp;

void MergeSort(int l, int r, vector<ll>& arr) {
    if (l >= r) return; // Điều kiện dừng

    int mid=(l+r)/2;
    MergeSort(l, mid, arr);
    MergeSort(mid+1, r, arr);

    temp.resize(r-l+1);
    int i=l, j=mid+1, cur=0;
    while(i<=mid || j<=r) {
        if(i>mid) {
            temp[cur++]=arr[j++];
        } else if(j>r) {
            temp[cur++]=arr[i++];
        } else if(arr[i]>arr[j]) {
            temp[cur++]=arr[j++];
        } else {
            temp[cur++]=arr[i++];
        }
    }

    for(int k=0; k<cur; k++) {
        arr[l+k]=temp[k];
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

clock_t start, end;
start=clock();

ll n; cin >> n; 
vector<ll> arr=createRamdomArray(n);
int l=0, r=n-1;
MergeSort(l, r, arr);
for(int i: arr) cout << i << " ";


end=clock();
double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
return 0;
}

/*
Để minh họa rõ ràng cách thuật toán MergeSort hoạt động thông qua các vòng lặp, chúng ta sẽ sử dụng một mảng nhỏ để dễ dàng theo dõi từng bước của quá trình sắp xếp. Giả sử chúng ta có mảng sau cần được sắp xếp:

```cpp
vector<ll> arr = {4, 1, 3, 9, 7};
```

Chúng ta sẽ theo dõi cách mảng này được sắp xếp bằng thuật toán MergeSort từng bước một.

### Mảng ban đầu
```
arr = {4, 1, 3, 9, 7}
```

### Gọi hàm MergeSort đầu tiên
```
MergeSort(0, 4, arr)
```
Chia mảng thành hai nửa:
- Trái: `MergeSort(0, 2, arr)`
- Phải: `MergeSort(3, 4, arr)`

### Xử lý nửa trái
```
MergeSort(0, 2, arr)
```
Chia tiếp:
- Trái: `MergeSort(0, 1, arr)`
- Phải: `MergeSort(2, 2, arr)`

### Xử lý nửa trái của nửa trái
```
MergeSort(0, 1, arr)
```
Chia tiếp:
- Trái: `MergeSort(0, 0, arr)`
- Phải: `MergeSort(1, 1, arr)`

### Trộn các nửa nhỏ
```
Trộn {4} và {1}
```
```
temp = {1, 4}
```
Cập nhật mảng:
```
arr = {1, 4, 3, 9, 7}
```

### Trộn với nửa phải
```
Trộn {1, 4} và {3}
```
```
temp = {1, 3, 4}
```
Cập nhật mảng:
```
arr = {1, 3, 4, 9, 7}
```

### Xử lý nửa phải ban đầu
```
MergeSort(3, 4, arr)
```
Chia:
- Trái: `MergeSort(3, 3, arr)`
- Phải: `MergeSort(4, 4, arr)`

### Trộn các nửa nhỏ
```
Trộn {9} và {7}
```
```
temp = {7, 9}
```
Cập nhật mảng:
```
arr = {1, 3, 4, 7, 9}
```

### Trộn hai nửa đã sắp xếp
```
Trộn {1, 3, 4} và {7, 9}
```
```
temp = {1, 3, 4, 7, 9}
```
Cập nhật mảng:
```
arr = {1, 3, 4, 7, 9}
```

Mảng cuối cùng đã được sắp xếp hoàn chỉnh:
```
arr = {1, 3, 4, 7, 9}
```

### Chi tiết từng bước

1. **Lần gọi đệ quy đầu tiên:**
    - Chia mảng từ vị trí 0 đến 4 thành hai nửa (0-2 và 3-4).

2. **Lần gọi đệ quy tiếp theo cho nửa trái:**
    - Chia nửa trái từ 0-2 thành hai nửa (0-1 và 2-2).
    - Chia nửa từ 0-1 thành hai nửa nhỏ hơn (0-0 và 1-1).

3. **Trộn các phần tử từ nhỏ nhất:**
    - Trộn các phần tử đơn lẻ từ 0-0 và 1-1 thành mảng {1, 4}.
    - Trộn mảng {1, 4} với phần tử 2-2 thành mảng {1, 3, 4}.

4. **Xử lý nửa phải ban đầu:**
    - Chia nửa phải từ 3-4 thành hai phần (3-3 và 4-4).
    - Trộn hai phần này thành mảng {7, 9}.

5. **Trộn hai nửa đã sắp xếp:**
    - Trộn mảng {1, 3, 4} và mảng {7, 9} để có mảng cuối cùng {1, 3, 4, 7, 9}.

Hy vọng rằng ví dụ này giúp bạn hiểu rõ hơn về cách thuật toán MergeSort hoạt động thông qua từng vòng lặp.
*/