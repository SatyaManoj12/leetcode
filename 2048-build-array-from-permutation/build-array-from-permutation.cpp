class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>Res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            Res.push_back(nums[nums[i]]);
        }
        return Res;
    }
};