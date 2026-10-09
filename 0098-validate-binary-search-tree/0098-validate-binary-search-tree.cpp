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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;

        // if(root->left){
        //     if(root->left->val >= root->val) return false;
        // }
        // if(root->right){
        //     if(root->right->val <= root->val) return false;
        // }
        // return (isValidBST(root->left) && isValidBST(root->right));
        vector<int> inorder;
        traverse(root,inorder);

        for(int i=1 ; i<inorder.size() ; i++){
            if(inorder[i] <= inorder[i-1]) return false;
        }
        return true;
    }

    void traverse(TreeNode* root , vector<int> &arr){
        if(!root) return;

        traverse(root->left , arr);
        arr.push_back(root->val);
        traverse(root->right , arr);
    }
};