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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> node;
        vector<vector<int>> res;
        if(!root) return res;
        node.push(root);
        
        while(!node.empty()){
            int curr_size = node.size();
            vector<int> curr_level;
            for(int i=0 ; i<curr_size ; i++){
                TreeNode *temp = node.front();
                curr_level.push_back(temp->val);
                if(temp->left) node.push(temp->left);
                if(temp->right) node.push(temp->right);
                node.pop();
            }
            res.push_back(curr_level); 
        }
        return res;
    }
};