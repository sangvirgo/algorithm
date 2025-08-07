#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class SegmentTree {
private:
  std::vector<int> tree; // Mảng lưu trữ cây
  std::vector<int> nums; // Mảng dữ liệu gốc
  int n;                 // Kích thước mảng gốc

  // Hàm đệ quy để xây dựng cây
  // node: chỉ số của nút hiện tại trong mảng tree
  // start, end: đoạn mà nút này quản lý
  void build(int node, int start, int end) {
    if (start == end) {
      // Nút lá, đại diện cho một phần tử
      tree[node] = nums[start];
    } else {
      int mid = start + (end - start) / 2;
      // Đệ quy xây dựng cho con trái và con phải
      build(2 * node + 1, start, mid);
      build(2 * node + 2, mid + 1, end);
      // Nút cha có giá trị bằng tổng hai nút con
      tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
  }

  // Hàm đệ quy để cập nhật một giá trị
  // idx: chỉ số trong mảng gốc cần cập nhật
  // val: giá trị mới
  void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
      // Cập nhật nút lá và mảng gốc
      nums[idx] = val;
      tree[node] = val;
    } else {
      int mid = start + (end - start) / 2;
      if (start <= idx && idx <= mid) {
        // Nếu chỉ số nằm ở nhánh trái
        update(2 * node + 1, start, mid, idx, val);
      } else {
        // Nếu chỉ số nằm ở nhánh phải
        update(2 * node + 2, mid + 1, end, idx, val);
      }
      // Cập nhật lại nút cha
      tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
  }

  // Hàm đệ quy để truy vấn tổng một đoạn [l, r]
  int query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) {
      // Đoạn của nút này nằm hoàn toàn ngoài đoạn truy vấn
      return 0;
    }
    if (l <= start && end <= r) {
      // Đoạn của nút này nằm hoàn toàn trong đoạn truy vấn
      return tree[node];
    }
    // Đoạn của nút này giao một phần với đoạn truy vấn
    int mid = start + (end - start) / 2;
    int p1 = query(2 * node + 1, start, mid, l, r);
    int p2 = query(2 * node + 2, mid + 1, end, l, r);
    return p1 + p2;
  }

public:
  // Hàm khởi tạo
  SegmentTree(const std::vector<int> &v) {
    nums = v;
    n = nums.size();
    // Cây cần kích thước khoảng 4*n để an toàn
    tree.resize(4 * n);
    build(0, 0, n - 1);
  }

  // Giao diện public cho hàm truy vấn
  int query(int l, int r) { return query(0, 0, n - 1, l, r); }

  // Giao diện public cho hàm cập nhật
  void update(int idx, int val) { update(0, 0, n - 1, idx, val); }
};

// Hàm main để chạy thử
int main() {
  std::vector<int> nums = {1, 3, 5, 7, 9, 11};
  SegmentTree st(nums);

  // Tính tổng từ chỉ số 1 đến 3 (3 + 5 + 7)
  std::cout << "Tong tu 1 den 3: " << st.query(1, 3) << std::endl; // Output: 15

  // Cập nhật phần tử ở chỉ số 2 thành giá trị 6
  st.update(2, 6);
  std::cout << "Da cap nhat nums[2] = 6" << std::endl;

  // Tính lại tổng từ chỉ số 1 đến 3 (3 + 6 + 7)
  std::cout << "Tong moi tu 1 den 3: " << st.query(1, 3)
            << std::endl; // Output: 16

  return 0;
}
