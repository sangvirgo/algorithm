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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> rs;
        string s;
        if(root==nullptr) return rs;
        preorderTraversal(rs, root, s);
        return rs;
    }

    void preorderTraversal(vector<string>& rs, TreeNode* root, string s)  {
        if(root==nullptr) return;
        s+=to_string(root->val);
        if(root->left ==nullptr && root->right==nullptr) {
            rs.push_back(s);
            return;
        }
        s+="->";
        if(root->left!=nullptr) {
            preorderTraversal(rs, root->left, s);
        }
        if(root->right!=nullptr) {
            preorderTraversal(rs, root->right, s);
        }    
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

TreeNode* root = new TreeNode(1);
root->left = new TreeNode(2);
root->right = new TreeNode(3);
root->left->right = new TreeNode(5);

Solution a;
vector<string> rs=a.binaryTreePaths(root);
for(auto& it: rs) {
    cout << it << endl;
}
return 0;
}