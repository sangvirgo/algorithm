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

// class ALVTree {
//     private:
//         TreeNode* root;
    
//     int getHeight(TreeNode* temp) {
//         if(temp==nullptr) {
//             return 0;
//         }
        
//         int LeftHeight=getHeight(temp->left);
//         int RightHeight=getHeight(temp->right);

//         return 1+max(LeftHeight, RightHeight);
//     }

//     int getBalance(TreeNode* node) {
//         return node ? getHeight(node->left) - getHeight(node->right) : 0;
//     }

//     // ll
//     TreeNode* rightRotate(TreeNode* x) {
//         TreeNode* y= x->left;
//         TreeNode* z=y->right;

//         y->right=x;
//         x->left=z;

//         return y;
//     }

//     TreeNode* LeftRotate(TreeNode* x) {
//         TreeNode* y= x->right;
//         TreeNode* z=y->left;

//         y->left=x;
//         x->right=z;

//         return y;
//     }
// };

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }

private:
    TreeNode* helper(vector<int>& nums, int l, int r){
        if(l>r) {
            return nullptr;
        }
        int mid = l + (r-l)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = helper(nums, l, mid-1);
        node->right = helper(nums, mid+1, r);
        return node;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}