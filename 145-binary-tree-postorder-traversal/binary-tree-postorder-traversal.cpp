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
vector<int>postord(TreeNode* root,vector<int>&v)
{
    if(root==NULL) return v;
    postord(root->left,v);
    postord(root->right,v);
    v.push_back(root->val);
    return v;
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        return postord(root,v);  
    }
};