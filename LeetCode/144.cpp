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

//   ############# Solution 1

// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> rs;
//         preorderHelper(root, rs);
//         return rs;
//     }

// private:
//     void preorderHelper(TreeNode* r, vector<int>& res) {
//         if(r==nullptr) return;

//         res.push_back(r->val);
//         preorderHelper(r->left, res);
//         preorderHelper(r->right, res);
//     }
// };



//   ############# Solution 2

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> rs;
        if(root==nullptr) return rs;
        stack<TreeNode*> q;

        q.push(root);

        while(!q.empty()) {
            TreeNode* current=q.top();
            q.pop();
            rs.push_back(current->val);
            // Đẩy con phải vào trước để con trái được xử lý trước (LIFO)
            if (current->right != nullptr) {
                q.push(current->right);
            }
            if (current->left != nullptr) {
                q.push(current->left);
            }
        }
        return rs;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}