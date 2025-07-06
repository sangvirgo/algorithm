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
    int minDepth(TreeNode* root) {
        if(root ==nullptr) return 0;

        queue<TreeNode*> q;
        q.push(root);
        int depth=1;

        while(!q.empty()){
            int level=q.size();

            for(int i=0; i<level; i++) {
                TreeNode* current = q.front();
                q.pop();
                if(current->left == nullptr || current->right ==nullptr) return depth;

                if(current->left !=nullptr) q.push(current->left);
                if(current->right!=nullptr) q.push(current->right);
            }
            depth++;
        }

        return depth;
    }
};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}