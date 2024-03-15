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
int md(TreeNode* root, int level)
{
    if(root==NULL) return level;
   int ls=md(root->left,level+1);
    int rs =md(root->right,level+1);
    return max(ls,rs);
}
    int maxDepth(TreeNode* root) {
       int res=md(root,0);
       return res;
    }
};