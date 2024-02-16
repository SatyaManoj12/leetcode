class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(find(nums.begin(),nums.end(),1)==nums.end())
        {
            return 1;
        }
        int i=0;
        while(i+1<nums.size())
        {
           if(nums[i]>0 and (nums[i]!=nums[i+1]  && nums[i]!=nums[i+1]-1))
            {
                return nums[i]+1;
                break;
            }
            else
            {
                i++;
            }
        }
        if(nums[nums.size()-1]>0)return nums[nums.size()-1]+1;
        return 1;
    }
};