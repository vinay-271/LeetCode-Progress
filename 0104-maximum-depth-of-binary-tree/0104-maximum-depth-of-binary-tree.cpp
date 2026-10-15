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
    int maxDepth(TreeNode* root , int depth=1 , int MaxDepth=1) {
        if(!root) return 0;
        
        MaxDepth = max(depth,MaxDepth);
        if(root->left) MaxDepth = maxDepth(root->left , depth+1 , MaxDepth);
        if(root->right) MaxDepth = maxDepth(root->right , depth+1 , MaxDepth);
        return MaxDepth;        
    }
};