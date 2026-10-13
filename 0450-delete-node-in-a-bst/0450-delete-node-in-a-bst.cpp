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
        if(!root) return root;
        if(root->val == key){
            return deleteN(root);
        }     

        TreeNode *temp = root;
        while(temp){
            if(temp->val > key){
                if(temp->left && temp->left->val==key){
                    temp->left = deleteN(temp->left);
                    break;
                }
                else temp = temp->left;
            }
            else{
                if(temp->right && temp->right->val == key){
                    temp->right = deleteN(temp->right);
                    break;
                }
                else{
                    temp = temp->right;
                }
            }
        }
        return root;
    }
    TreeNode* deleteN(TreeNode *root){
        if(!root->left && !root->right) return nullptr;
        if(!root->left) return root->right;
        if(!root->right) return root->left;

        TreeNode *rightNode = root->right;
        TreeNode *lastRight = root->left;
        while(lastRight->right){
            lastRight = lastRight->right;
        }
        lastRight->right = rightNode;
        return root->left;
    }
};