#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* current=root;
        vector<int> rs;
        stack<TreeNode*> stack;
        
        while(current != nullptr || !stack.empty()) {
            while(current!=nullptr) {
                stack.push(current);
                current=current->left;
            }

            current = stack.top();
            stack.pop();
            rs.push_back(current->val);

            current=current->right;
        }
        return rs;
    }
};

TreeNode* createSampleTree() {
    // Tạo cây:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    return root;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Solution sol;
TreeNode* root = createSampleTree();

vector<int> result = sol.inorderTraversal(root);

cout << "Inorder Traversal: ";
for (int val : result) {
    cout << val << " ";
}
cout << endl;

// Kết quả mong đợi: 4 2 5 1 3
// (Left-Root-Right)

return 0;
}