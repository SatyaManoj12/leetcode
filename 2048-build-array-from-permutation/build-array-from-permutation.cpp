class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
    vector<int>res;
    int n=nums.size();
    int i=0;
    while(i<nums.size())
    {
        res.push_back(nums[nums[i]]);
        i++;
    }
    return res;
    }
};