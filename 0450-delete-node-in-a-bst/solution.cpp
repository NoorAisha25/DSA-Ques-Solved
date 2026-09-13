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
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root == NULL) return NULL;
       if(key < root->val) root ->left = deleteNode(root->left , key);
       else if(key > root->val) root->right = deleteNode(root->right , key);
       else{
           if(!root->left) return root->right;
           if(!root->right) return root->left;

           TreeNode* pre = findMax(root ->left);
           root->val = pre->val;
           root -> left = deleteNode(root->left , pre->val);
       }
       return root;
    }

    TreeNode* findMax(TreeNode* root){
        while(root->right){
            root = root->right;
        }
        return root;
    }
};
