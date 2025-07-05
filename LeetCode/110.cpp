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
    bool isBalanced(TreeNode* root) {
        return checkBalace(root) !=-1;
    }
private:
    int checkBalace(TreeNode* node) {
        if(node == nullptr ) return 0;

        int l = checkBalace(node->left);
        if(l==-1) return -1;

        int r = checkBalace(node->right);
        if(r==-1) return -1;

        if(abs(l-r)>1) return -1;

        return 1+max(r, l);
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}