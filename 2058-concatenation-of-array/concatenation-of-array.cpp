class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while (i < nums.size()) {
            ans.push_back(nums[i]);
            i++;
        }
        int j=0;
        while (j < nums.size()) {
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};