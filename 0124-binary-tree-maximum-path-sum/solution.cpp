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
    int maxsum ;
    int solve(TreeNode* root){
        if(root == NULL) return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        int a = root->val + left + right;
        int b = root->val + max(left , right);
        int c = root->val;

        maxsum = max({maxsum , a , b , c});
        return max(b , c);
    }
    int maxPathSum(TreeNode* root) {
      maxsum = INT_MIN;
      solve(root);
      return maxsum;
    }
};
