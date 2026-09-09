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
    int minDepth(TreeNode* root) {
        if(root == NULL) return NULL;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if(root->left == NULL) return 1 + right; // no left child
        if(root->right == NULL) return 1 + left; // no right child

        return 1 + min(left , right); // both left and right child
    }
};
