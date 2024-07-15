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
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_set<int>st;
        unordered_map<int,TreeNode*>mpp;
        for(auto&itr: des)
        {
            int parent=itr[0];
            int child=itr[1];
            int isleft=itr[2];
            st.insert(child);
            if(mpp.find(parent)==mpp.end())
            {
                mpp[parent]=new TreeNode(parent);

            }
            if(mpp.find(child)==mpp.end())
            {
                mpp[child]=new TreeNode(child);

            }
            if(isleft==1)
            {
                mpp[parent]->left=mpp[child];
            }
            else
            {
                mpp[parent]->right=mpp[child];
            }
        }
        int root=-1;
        for(auto &itr:des){
            if(st.find(itr[0])==st.end())
            {
                root=itr[0];
                break;
            }
        }
        return mpp[root];
    }
};