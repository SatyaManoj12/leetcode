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
void lo(TreeNode* root,vector<vector<int>>&ans)
{ 
    if(root==NULL) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        vector<int>v;
        int size=q.size();
        while(size>0)
        {
            TreeNode* node=q.front();
            v.push_back(node->val);
            q.pop();
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
            size--;
        }
        ans.push_back(v);
    }

}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
          lo(root,ans);
          return ans;
    }
};