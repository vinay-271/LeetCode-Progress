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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = new TreeNode(preorder[0]);

        for(int num : preorder){
            construct(root,num);
        }
        return root;
    }

    void construct(TreeNode *&root , int val){
        if(val == root->val) return;
        TreeNode *temp = root;
        
       while(true){
        if(val < temp->val){
            if(!temp->left){
                temp->left = new TreeNode(val);
                return;
            }
            else{
                temp = temp->left;
            }
        }
        else{
            if(!temp->right){
                temp->right = new TreeNode(val);
                return;
            }
            else{
                temp = temp->right;
            }
        }
        
       }
    }
};