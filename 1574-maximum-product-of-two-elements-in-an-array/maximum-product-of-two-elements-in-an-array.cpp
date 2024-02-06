class Solution {
public:
    int maxProduct(vector<int>& nums) {
       // int mx=*max_element(nums.begin(),nums.end());
        int m=0,se=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>m)
            {
                se=m;
                m=nums[i];
            }
            else if(nums[i]>se)
            {
                se=nums[i];
            }
        }
        return (m-1)*(se-1);
    }
};