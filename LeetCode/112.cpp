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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;

        targetSum-=root->val;

        if(targetSum == 0 && root->left ==nullptr && root->right==nullptr) return true;
        
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}