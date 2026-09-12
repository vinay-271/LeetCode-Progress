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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        invertTree1(root);
        return root;        
    }
    void invertTree1(TreeNode* root){
        //base case
        if((root->left == NULL) && (root->right == NULL)) return; //leaf Node

        // self-work
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;

        // recursive call
        if(root->left != NULL)
            invertTree1(root->left);
        if(root->right != NULL)
            invertTree1(root->right);
    }
};