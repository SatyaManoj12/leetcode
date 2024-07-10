class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res;
        int i=0;
        while(i<nums.size())
        {
            res.push_back(nums[i]);
            i++;
        }
        i=0;
        while(i<nums.size())
        {
            res.push_back(nums[i]);
            i++;
                }
                return res;
    }
};