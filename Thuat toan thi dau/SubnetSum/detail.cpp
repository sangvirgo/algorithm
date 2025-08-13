#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Hàm in bảng DP để debug
void printDPTable(const vector<vector<bool>>& dp, const vector<int>& arr, int target) {
    int n = arr.size();
    
    cout << "\nBảng DP:\n";
    cout << setw(8) << "i\\j";
    for (int j = 0; j <= target; j++) {
        cout << setw(4) << j;
    }
    cout << "\n";
    
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            cout << setw(8) << "∅";  // tập rỗng
        } else {
            cout << setw(8) << arr[i-1];
        }
        
        for (int j = 0; j <= target; j++) {
            cout << setw(4) << (dp[i][j] ? "T" : "F");
        }
        cout << "\n";
    }
    cout << "\n";
}

// Hàm findSubset với debug chi tiết
vector<int> findSubsetDetailed(vector<int>& arr, int target) {
    int n = arr.size();
    
    cout << "=== BƯỚC 1: XÂY DỰNG BẢNG DP ===\n";
    cout << "Mảng: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n-1) cout << ", ";
    }
    cout << "], Target: " << target << "\n";
    
    // Khởi tạo bảng DP
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
    
    // Base case: tổng 0 luôn có thể tạo được
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }
    
    cout << "\nSau khi khởi tạo base case (tổng 0 = true):\n";
    printDPTable(dp, arr, target);
    
    // Điền bảng DP
    for (int i = 1; i <= n; i++) {
        cout << "Xét phần tử arr[" << i-1 << "] = " << arr[i-1] << ":\n";
        
        for (int j = 1; j <= target; j++) {
            // Không chọn phần tử arr[i-1]
            dp[i][j] = dp[i-1][j];
            
            // Chọn phần tử arr[i-1] nếu có thể
            if (j >= arr[i-1]) {
                bool oldValue = dp[i][j];
                dp[i][j] = dp[i][j] || dp[i-1][j - arr[i-1]];
                
                if (!oldValue && dp[i][j]) {
                    cout << "  dp[" << i << "][" << j << "] = true (chọn " 
                         << arr[i-1] << ", cần " << j - arr[i-1] << " từ trước)\n";
                }
            }
        }
    }
    
    printDPTable(dp, arr, target);
    
    // Kiểm tra xem có solution không
    if (!dp[n][target]) {
        cout << "Không tồn tại subset có tổng = " << target << "\n";
        return {};
    }
    
    cout << "=== BƯỚC 2: BACKTRACKING ===\n";
    cout << "dp[" << n << "][" << target << "] = true, bắt đầu backtrack...\n\n";
    
    // Backtracking để tìm subset
    vector<int> result;
    int i = n, j = target;
    
    while (i > 0 && j > 0) {
        cout << "Tại i=" << i << ", j=" << j << ":\n";
        cout << "  dp[" << i-1 << "][" << j << "] = " << (dp[i-1][j] ? "true" : "false") << "\n";
        
        // Nếu dp[i-1][j] = false, nghĩa là PHẢI chọn phần tử arr[i-1]
        if (!dp[i-1][j]) {
            cout << "  → PHẢI chọn arr[" << i-1 << "] = " << arr[i-1] << "\n";
            result.push_back(arr[i-1]);
            j -= arr[i-1];
            cout << "  → j giảm xuống còn " << j << "\n";
        } else {
            cout << "  → CÓ THỂ không chọn arr[" << i-1 << "] = " << arr[i-1] << "\n";
            cout << "  → Chọn không chọn (có thể chọn cách khác)\n";
        }
        i--;
        cout << "\n";
    }
    
    cout << "Kết quả: ";
    if (result.empty()) {
        cout << "Không tìm thấy subset\n";
    } else {
        cout << "[";
        for (int k = 0; k < result.size(); k++) {
            cout << result[k];
            if (k < result.size() - 1) cout << ", ";
        }
        cout << "]\n";
        
        // Verify
        int sum = 0;
        for (int x : result) sum += x;
        cout << "Kiểm tra: " << sum << " = " << target << " ✓\n";
    }
    
    return result;
}

// Hàm tìm TẤT CẢ các subset có tổng = target
void findAllSubsets(vector<int>& arr, int target, int index, vector<int>& current, vector<vector<int>>& allSubsets, int currentSum) {
    if (currentSum == target) {
        allSubsets.push_back(current);
        return;
    }
    
    if (index >= arr.size() || currentSum > target) {
        return;
    }
    
    // Chọn phần tử hiện tại
    current.push_back(arr[index]);
    findAllSubsets(arr, target, index + 1, current, allSubsets, currentSum + arr[index]);
    current.pop_back();
    
    // Không chọn phần tử hiện tại
    findAllSubsets(arr, target, index + 1, current, allSubsets, currentSum);
}

int main() {
    // Ví dụ 1: Trường hợp có nhiều solution
    cout << "==================== VÍ DỤ 1 ====================\n";
    vector<int> arr1 = {2, 3, 7, 8};
    int target1 = 10;
    
    vector<int> result1 = findSubsetDetailed(arr1, target1);
    
    // Tìm tất cả các subset
    vector<vector<int>> allSubsets1;
    vector<int> current1;
    findAllSubsets(arr1, target1, 0, current1, allSubsets1, 0);
    
    cout << "\nTất cả các subset có tổng = " << target1 << ":\n";
    for (const auto& subset : allSubsets1) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    
    cout << "\n\n==================== VÍ DỤ 2 ====================\n";
    vector<int> arr2 = {1, 2, 3, 4};
    int target2 = 6;
    
    vector<int> result2 = findSubsetDetailed(arr2, target2);
    
    // Tìm tất cả các subset cho ví dụ 2
    vector<vector<int>> allSubsets2;
    vector<int> current2;
    findAllSubsets(arr2, target2, 0, current2, allSubsets2, 0);
    
    cout << "\nTất cả các subset có tổng = " << target2 << ":\n";
    for (const auto& subset : allSubsets2) {
        cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    
    cout << "\n\n==================== VÍ DỤ 3 ====================\n";
    vector<int> arr3 = {1, 2, 5};
    int target3 = 4;
    
    vector<int> result3 = findSubsetDetailed(arr3, target3);
    
    return 0;
}