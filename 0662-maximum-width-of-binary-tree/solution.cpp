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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        long long maxi = 0;
        queue<pair<TreeNode* , long long>>q;
        q.push({root , 0});

        while(!q.empty()){
            int n = q.size();
            long long l = q.front().second;
            long long r = q.back().second;
            maxi = max( maxi , r - l  + 1);

            for(int i = 0 ; i < n ; i++){
                auto [node , idx] = q.front();
                q.pop();

                long long nor = idx - l;
                if(node->left) q.push({node->left , nor * 2});
                if(node->right) q.push({node->right , nor * 2 + 1});
            }
        }
        return (int)maxi;
    }
};

