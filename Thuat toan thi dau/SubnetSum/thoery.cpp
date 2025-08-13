#include <iostream>
#include <vector>
using namespace std;

// Phương pháp DP 2D - Dễ hiểu nhất
bool subsetSum2D(vector<int> &arr, int target) {
  int n = arr.size();

  // dp[i][j] = true nếu có thể tạo tổng j từ i phần tử đầu
  vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

  // Base case: tổng 0 luôn có thể tạo được (chọn tập rỗng)
  for (int i = 0; i <= n; i++) {
    dp[i][0] = true;
  }

  // Điền bảng DP
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= target; j++) {
      // Không chọn phần tử thứ i
      dp[i][j] = dp[i - 1][j];

      // Chọn phần tử thứ i (nếu có thể)
      if (j >= arr[i - 1]) {
        dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]];
      }
    }
  }

  return dp[n][target];
}

// Phương pháp DP 1D - Tối ưu space complexity
bool subsetSum1D(vector<int> &arr, int target) {
  vector<bool> dp(target + 1, false);
  dp[0] = true; // Tổng 0 luôn có thể tạo được

  for (int num : arr) {
    // Duyệt ngược để tránh sử dụng kết quả đã cập nhật
    for (int j = target; j >= num; j--) {
      dp[j] = dp[j] || dp[j - num];
    }
  }

  return dp[target];
}

// Hàm in ra một subset có tổng bằng target (nếu tồn tại)
vector<int> findSubset(vector<int> &arr, int target) {
  int n = arr.size();
  vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

  // Xây dựng bảng DP
  for (int i = 0; i <= n; i++) {
    dp[i][0] = true;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= target; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j >= arr[i - 1]) {
        dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i - 1]];
      }
    }
  }

  // Nếu không tồn tại subset
  if (!dp[n][target]) {
    return {};
  }

  // Backtrack để tìm subset
  vector<int> result;
  int i = n, j = target;

  while (i > 0 && j > 0) {
    // Nếu dp[i-1][j] = false, nghĩa là phải chọn phần tử i
    if (!dp[i - 1][j]) {
      result.push_back(arr[i - 1]);
      j -= arr[i - 1];
    }
    i--;
  }

  return result;
}

int main() {
  // Test case 1
  vector<int> arr1 = {3, 34, 4, 12, 5, 2};
  int target1 = 9;

  cout << "Array: [";
  for (int i = 0; i < arr1.size(); i++) {
    cout << arr1[i];
    if (i < arr1.size() - 1)
      cout << ", ";
  }
  cout << "], Target: " << target1 << endl;

  cout << "Subset sum exists (2D DP): "
       << (subsetSum2D(arr1, target1) ? "Yes" : "No") << endl;
  cout << "Subset sum exists (1D DP): "
       << (subsetSum1D(arr1, target1) ? "Yes" : "No") << endl;

  vector<int> subset = findSubset(arr1, target1);
  if (!subset.empty()) {
    cout << "One possible subset: [";
    for (int i = 0; i < subset.size(); i++) {
      cout << subset[i];
      if (i < subset.size() - 1)
        cout << ", ";
    }
    cout << "]" << endl;
  }
  cout << endl;

  // Test case 2
  vector<int> arr2 = {1, 2, 3, 7};
  int target2 = 6;

  cout << "Array: [";
  for (int i = 0; i < arr2.size(); i++) {
    cout << arr2[i];
    if (i < arr2.size() - 1)
      cout << ", ";
  }
  cout << "], Target: " << target2 << endl;

  cout << "Subset sum exists: " << (subsetSum1D(arr2, target2) ? "Yes" : "No")
       << endl;

  subset = findSubset(arr2, target2);
  if (!subset.empty()) {
    cout << "One possible subset: [";
    for (int i = 0; i < subset.size(); i++) {
      cout << subset[i];
      if (i < subset.size() - 1)
        cout << ", ";
    }
    cout << "]" << endl;
  }
  cout << endl;

  // Test case 3 - Không tồn tại
  vector<int> arr3 = {1, 2, 5};
  int target3 = 4;

  cout << "Array: [";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i];
    if (i < arr3.size() - 1)
      cout << ", ";
  }
  cout << "], Target: " << target3 << endl;

  cout << "Subset sum exists: " << (subsetSum1D(arr3, target3) ? "Yes" : "No")
       << endl;

  return 0;
}
