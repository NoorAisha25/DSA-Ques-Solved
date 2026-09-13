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
class Solution {
public:
    int d;
    int diameterOfBinaryTree(TreeNode* root) {
        d = 0;
        solve(root);
        return d;
    }
     
    int solve(TreeNode* root){
        if(root == NULL) return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        d = max(d , left + right);

        return 1 + max(left , right);
    }
};
