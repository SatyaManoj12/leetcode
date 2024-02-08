class Solution {
    void solver(vector<int>&candidates,int index,int n,int sum,vector<vector<int>>&res,vector<int>v,int target)
    {
        if(index>=n)
        {
            return ;
        }
        if(sum > target)return;
        if(sum==target)
        {
            // for(int i=0;i<=res.size();i++)
            // {
            //  v.push_back(candidates[i]);
            // }
            for(int x: v){
                cout<<x<<" ";
            }
            cout<<endl;
            res.push_back(v);
            return;
        }
        v.push_back(candidates[index]);
        solver(candidates,index,n,sum+candidates[index],res,v,target);
        v.pop_back();
        solver(candidates,index+1,n,sum,res,v,target);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
       vector<vector<int>>r;
       vector<int>v;
        solver(candidates,0,n,0,r,v,target);
        return r;
    }
};