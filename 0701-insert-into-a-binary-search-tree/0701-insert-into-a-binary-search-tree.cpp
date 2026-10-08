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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *temp = new TreeNode(val);
        if(!root) return temp;

        TreeNode *temp2 = insert(root , val);
        if(val < temp2->val) {
            temp2->left = temp;
        }
        else if(val > temp2->val){
            temp2->right = temp;
        }
        return root;
    }

    TreeNode* insert(TreeNode *root , int val){
        if(!root) return nullptr;

        if(root->val > val && !(root->left)) return root;
        if(root->val < val && !(root->right)) return root;

        if(root->val > val) return insert(root->left , val);
        return insert(root->right , val);
    }
};