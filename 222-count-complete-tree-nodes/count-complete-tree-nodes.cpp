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
void ord(TreeNode* root,vector<int>&v)
{
    if(root==NULL) return ;
    ord(root->left,v);
    v.push_back(root->val);
    ord(root->right,v);
}
    int countNodes(TreeNode* root) {
        vector<int>v;
        ord(root,v);  
        return v.size();   
    }
};