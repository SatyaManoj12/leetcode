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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>v;
        ord(root,v);
        sort(v.begin(),v.end());
        for(auto itr:v)
        {
            cout<<itr<<" ";
        }
        int sum=0;
        int m,n;
        int se=lower_bound(v.begin(), v.end(), low) - v.begin();
        int he=upper_bound(v.begin(), v.end(), high) - v.begin();
            for(int i=se;i<=he-1;i++)
           {
           sum+=v[i];
         }
        return sum;
        
    }
};