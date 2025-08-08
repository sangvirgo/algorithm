#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

class SegmentTree {
private:
  std::vector<int> tree;
  int n;

  // Hàm đệ quy để xây dựng cây
  void build(const std::vector<int> &baskets, int node, int start, int end) {
    if (start == end) {
      tree[node] = baskets[start];
    } else {
      int mid = start + (end - start) / 2;
      build(baskets, 2 * node + 1, start, mid);
      build(baskets, 2 * node + 2, mid + 1, end);
      tree[node] = std::max(tree[2 * node + 1], tree[2 * node + 2]);
    }
  }

  // Hàm đệ quy để cập nhật cây sau khi dùng một giỏ
  void update(int node, int start, int end, int idx) {
    if (start == end) {
      tree[node] = -1; // Đánh dấu là đã sử dụng
      return;
    }
    int mid = start + (end - start) / 2;
    if (start <= idx && idx <= mid) {
      update(2 * node + 1, start, mid, idx);
    } else {
      update(2 * node + 2, mid + 1, end, idx);
    }
    tree[node] = std::max(tree[2 * node + 1], tree[2 * node + 2]);
  }

  // Hàm đệ quy để tìm giỏ ngoài cùng bên trái phù hợp
  int findLeftmost(int node, int start, int end, int capacity) {
    // Nếu max của cả đoạn này còn không đủ, bỏ qua
    if (tree[node] < capacity) {
      return -1;
    }
    // Nếu là nút lá, ta đã tìm thấy
    if (start == end) {
      return start;
    }

    int mid = start + (end - start) / 2;
    int left_result = -1;

    // Ưu tiên tìm ở nhánh trái trước
    if (tree[2 * node + 1] >= capacity) {
      left_result = findLeftmost(2 * node + 1, start, mid, capacity);
    }

    // Nếu nhánh trái có kết quả, trả về ngay
    if (left_result != -1) {
      return left_result;
    }

    // Nếu không, tìm ở nhánh phải
    return findLeftmost(2 * node + 2, mid + 1, end, capacity);
  }

public:
  SegmentTree(const std::vector<int> &baskets) {
    n = baskets.size();
    tree.resize(4 * n);
    build(baskets, 0, 0, n - 1);
  }

  // Giao diện public để tìm giỏ
  int findAndMark(int capacity) {
    int idx = findLeftmost(0, 0, n - 1, capacity);
    if (idx != -1) {
      update(0, 0, n - 1, idx);
    }
    return idx;
  }
};

class Solution {
public:
  int numOfUnplacedFruits(std::vector<int> &fruits, std::vector<int> &baskets) {
    if (baskets.empty()) {
      return fruits.size();
    }

    SegmentTree st(baskets);
    int unplaced_count = 0;

    for (int fruit_quantity : fruits) {
      int basket_idx = st.findAndMark(fruit_quantity);
      if (basket_idx == -1) {
        unplaced_count++;
      }
    }

    return unplaced_count;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}
