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
    int maxSum;
    int solve(TreeNode* root){
        if(root == NULL) return 0;

        int l = solve(root -> left);
        int r = solve(root -> right);

        //1
        int neeche_wala_accha = l + r + root->val;

        //2
        int koi_ek_accha = max(l , r) + root->val;

        //3
        int sirf_root_accha = root->val;

        maxSum = max({maxSum , neeche_wala_accha ,koi_ek_accha, sirf_root_accha }) ;

        return max(koi_ek_accha, sirf_root_accha);
    }
    int maxPathSum(TreeNode* root) {

        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};
