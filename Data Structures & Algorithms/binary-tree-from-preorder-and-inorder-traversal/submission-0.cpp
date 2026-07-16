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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int , int >inmap;
        for(int i = 0;i<inorder.size();i++){
            inmap[inorder[i]]=i;
        }
        TreeNode*root =  buildTree(preorder ,0,preorder.size()-1,inorder, 0,inorder.size()-1,inmap);
        return root;
    }
    TreeNode* buildTree(vector<int>&preorder , int preStart,int preEnd, vector<int> &inorder , int inStart, int inEnd, map<int,int>inmap){
        if(preStart > preEnd || inStart > inEnd){
        return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot= inmap[root->val];
        int numsLeft = inRoot - inStart;
         
         root->left = buildTree(preorder, preStart+1 , preStart + numsLeft, inorder , inStart , inRoot-1, inmap );
         root->right = buildTree(preorder , preStart +1 + numsLeft, preEnd, inorder  , inRoot+1, inEnd, inmap );
        return root;
    }
};
