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
vector<int>preord(TreeNode* root,vector<int>&v)
{
    if(root==NULL) return v;
    v.push_back(root->val);
    preord(root->left,v);
    preord(root->right,v);
    return v;
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        return preord(root,v);
        
    }
};