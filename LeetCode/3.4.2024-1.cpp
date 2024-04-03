#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/same-tree/description/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==q) return true;
        if(!p || !q || p->val !=q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};


int main() {
    // Tạo cây 1: [1,2,3]
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Tạo cây 2: [1,2,3]
    TreeNode* root2 = new TreeNode(1);
    root2->left = nullptr;
    root2->right = new TreeNode(3);

    Solution solution;
    
    // Kiểm tra hai cây có giống nhau không
    if (solution.isSameTree(root1, root2)) {
        cout << "Two trees are same." << endl;
    } else {
        cout << "Two trees are not same." << endl;
    }

    // Giải phóng bộ nhớ
    delete root1->left;
    delete root1->right;
    delete root1;

    delete root2->left;
    delete root2->right;
    delete root2;

    return 0;
}
