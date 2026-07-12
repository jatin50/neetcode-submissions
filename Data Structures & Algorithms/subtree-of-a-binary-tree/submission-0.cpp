class Solution {
public:
    bool isSame(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr)
            return true;

        if (a == nullptr || b == nullptr)
            return false;

        if (a->val != b->val)
            return false;

        return isSame(a->left, b->left) &&
               isSame(a->right, b->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr)
            return false;

        if (isSame(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};