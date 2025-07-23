#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 101
const int MOD = 1e9 + 7;
/*
Bài toán: Cây Thông Noel
Đề bài: Có N hộp khối lập phương, hộp thứ i có độ dài cạnh là ai, Ta muốn tạo nên một cây thông trang trí cho mùa Noel sắp tới bằng cách chồng các hộp lên nhau với điều kiện hộp nằm bên trên phải nhỏ hơn hộp nằm bên dưới và để cho cân đối thì chênh lệch độ dài cạnh giữa các cặp hộp nằm cạnh nhau phải bằng nhau. Hãy cho biết ta có thể tạo ra cây thông Noel với chiều cao tối đa là bao nhiêu ?

Input: dòng đầu tiên chứa n(1 ≤ n ≤ 100) là số lượng hộp khối lập phương. Dòng thứ 2 chứa n số nguyên a1, a2, ..., an(1 ≤ ai ≤ 100) là độ dài cạnh của các hộp khối lập phương.
Output: Xuất ra chiều cao lớn nhất của cây thông.

6 
3 6 2 1 4 9

7
12 8 11 7 3 1 2
*/
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; ++i) {
      cin >> a[i];
  }

  int res=0;
  int temp=0;
  int tong=0;
  sort(a.begin(), a.end());

  for(int i=1; i<=100; i++) {
    for(int j=0; j<n; j++) {
      tong=a[j];
      temp=a[j];
      for(int k=j+1; k<n; k++) {
        if(a[k]-temp==i) {
          temp+=i;
          tong+=temp;
        } else break;
      }
      res=max(res, tong);
    }
  }



  cout << res << endl;
  return 0;
}
