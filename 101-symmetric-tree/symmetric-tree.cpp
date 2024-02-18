/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetricHelper(TreeNode* left, TreeNode* right) {
        // If both nodes are null, they are symmetric
        if (left == nullptr && right == nullptr)
            return true;

        // If one of the nodes is null and the other is not, they are not
        // symmetric
        if (left == nullptr || right == nullptr)
            return false;

        // Check if values are the same and their subtrees are symmetric
        return (left->val == right->val) &&
               isSymmetricHelper(left->left, right->right) &&
               isSymmetricHelper(left->right, right->left);
    }
 bool isSymmetric(TreeNode* root) {
    return isSymmetricHelper(root->left,root->right);    
}
};