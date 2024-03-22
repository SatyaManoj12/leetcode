class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int s=nums.size();
       int i=0;
       int j = s/2;
       vector<int>res;
       while(i < s/2 and j<s and n--)
       {
        res.push_back(nums[i]);
        res.push_back(nums[j]);
        i++;
        j++;
       }
      /* while(j<s)
       {
        res.push_back(nums[j]);
        j++;
       }
       while(i<s/2)
       {
        res.push_back(nums[i]);
        i++;
       }*/
       return res;
    }
};