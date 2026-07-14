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
        return valid(root, LONG_MIN , LONG_MAX); 
    }
        bool valid(TreeNode* node , long left, long right){
            if(!node){
                return true;
            }
            if(!(left<node->val &&right>node->val)){
                return false;
            }
            return valid(node->left , left, node->val)&& valid(node->right , node->val, right);
        }
};
