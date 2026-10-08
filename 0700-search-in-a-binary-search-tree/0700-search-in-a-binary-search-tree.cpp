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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *res = searchNode(root,val);
        return res;
    }

    TreeNode* searchNode(TreeNode *root , int val){
        if(!root) return nullptr;
        
        if(val == root->val) return root;
        else if(val < root->val) return searchNode(root->left,val);
        return searchNode(root->right,val);
    }
};