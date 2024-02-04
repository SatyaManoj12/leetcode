class Solution {
void solve(vector<int>&nums,int start,int end, vector<vector<int>>&res)
{
    if(start>=end)
    {
        res.push_back(nums);
        return ;
    }
    for(int i=start;i<=end;i++)
    {
        swap(nums[start],nums[i]);
        solve(nums,start+1,end,res);
        swap(nums[start],nums[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
       solve(nums,0,nums.size()-1,res);
       return res;
    }
};