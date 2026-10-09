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

        TreeNode *prev = nullptr;
        return traverse(root , prev);
    }

    bool traverse(TreeNode* root , TreeNode *&prev){
        if(!root) return true;

        bool leftSubtree = traverse(root->left , prev);
        if(prev && (root->val <= prev->val)) return false;
        prev = root;
        bool rightSubtree = traverse(root->right , prev);
        
        return leftSubtree && rightSubtree;

    }
};