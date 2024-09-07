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
  map<int, int> cnt;

  for (int i = 0; i < n; ++i) {
      cin >> a[i];
      cnt[a[i]]++;
  }

  if(n==1) {
    cout << a[0] << endl;
    return 0;
  }
  if(n==2) {
    cout << a[0]+ a[1] << endl;
    return 0;
  }
  int res=0;
  sort(a.begin(), a.end(), greater<int>());


  for (int i = i; i<=n; i++) {
      int temp=0;
      for(int j=a[i]; j<=MAX; j+=a[i]) {
          if(cnt[j]>0) {
              temp+=j;
          } else {
            break;
          }
      }
      res=max(res, temp);
  }

  cout << res << endl;
  return 0;
}
