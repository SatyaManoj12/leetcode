class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>freq(100000+1);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++)
        {
            if(freq[nums[i]]>1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};