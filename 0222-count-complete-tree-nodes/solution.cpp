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
private:
    int solve(TreeNode* root ){
        int h = 0;
        while(root){
            h++;
            root = root ->left;
        }
        return h;
    }
public:    
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        int left = solve(root->left );
        int right = solve(root -> right );
        if(left == right){
            return (1 << left) + countNodes(root -> right);
        }
        else{
            return (1 << right) + countNodes(root -> left);
        }
    }
};
