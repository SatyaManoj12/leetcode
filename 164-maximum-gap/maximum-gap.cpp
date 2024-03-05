class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(max<nums[i+1]-nums[i])
            {
                max=nums[i+1]-nums[i];
            }
        }
        return max;
    }
};